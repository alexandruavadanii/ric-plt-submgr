#
#==================================================================================
#   Copyright (c) 2019 AT&T Intellectual Property.
#   Copyright (c) 2019 Nokia
#
#   Licensed under the Apache License, Version 2.0 (the "License");
#   you may not use this file except in compliance with the License.
#   You may obtain a copy of the License at
#
#       http://www.apache.org/licenses/LICENSE-2.0
#
#   Unless required by applicable law or agreed to in writing, software
#   distributed under the License is distributed on an "AS IS" BASIS,
#   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#   See the License for the specific language governing permissions and
#   limitations under the License.
#==================================================================================
#
#
#	Abstract:	Builds a container to compile Subscription Manager's code
#	Date:		28 May 2019
#

FROM akrainoenea/bldr-ubuntu18-c-go-aarch64:3-u18.04-nng as submgrbuild

WORKDIR /tmp

# Install RMr shared library
ENV RMR_VER=1.9.0
RUN git clone https://gerrit.o-ran-sc.org/r/ric-plt/lib/rmr -b ${RMR_VER} \
    && mkdir -p rmr/build \
    && cd rmr/build \
    && ( cmake -DDEV_PKG=1 .. && make install && ldconfig ) \
    && ( cmake -DDEV_PKG=0 .. && make install && ldconfig )

# "PULLING LOG and COMPILING LOG"
RUN git clone "https://gerrit.o-ran-sc.org/r/com/log" /opt/log && cd /opt/log && \
 ./autogen.sh && ./configure && make install && ldconfig

# "Installing Swagger"
RUN cd /usr/local/go/bin \
    && if test "$(uname -m)" = "aarch64" ; then ARCH="arm64"; else ARCH="amd64"; fi \
    && wget --quiet https://github.com/go-swagger/go-swagger/releases/download/v0.19.0/swagger_linux_$ARCH \
    && mv swagger_linux_$ARCH swagger \
    && chmod +x swagger

WORKDIR /opt/submgr
COPY e2ap e2ap

# "COMPILING E2AP Wrapper"
RUN cd e2ap && \
    gcc -c -fPIC -Iheaders/ lib/*.c wrapper.c && \
    gcc *.o -shared -o libwrapper.so && \
    cp libwrapper.so /usr/local/lib/ && \
    cp wrapper.h headers/*.h /usr/local/include/ && \
    ldconfig

COPY api api

# "Getting and generating routing managers api client"
RUN git clone "https://gerrit.o-ran-sc.org/r/ric-plt/rtmgr" \
    && cp rtmgr/api/routing_manager.yaml api/ \
    && rm -rf rtmgr

RUN mkdir pkg

COPY go.mod go.mod

RUN mkdir -p /root/go && \
    /usr/local/go/bin/swagger generate client -f api/routing_manager.yaml -t pkg/ -m rtmgr_models -c rtmgr_client


RUN /usr/local/go/bin/go mod tidy
COPY pkg pkg
COPY cmd cmd

# "COMPILING Subscription manager"
RUN mkdir -p /opt/bin && \
  /usr/local/go/bin/go build -o /opt/bin/submgr cmd/submgr.go && \
     mkdir -p /opt/build/container/usr/local

FROM ubuntu:18.04

RUN apt update && apt install -y iputils-ping net-tools curl tcpdump

COPY run_submgr.sh /
COPY --from=submgrbuild /opt/bin/submgr /
COPY --from=submgrbuild /usr/local/include /usr/local/include
COPY --from=submgrbuild /usr/local/lib /usr/local/lib
RUN ldconfig

RUN chmod 755 /run_submgr.sh
CMD /run_submgr.sh
