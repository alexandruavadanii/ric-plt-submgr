/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_HandoverPreparationFailure_H_
#define	_HandoverPreparationFailure_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ProtocolIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* HandoverPreparationFailure */
typedef struct HandoverPreparationFailure {
	ProtocolIE_Container_7632P16_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HandoverPreparationFailure_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HandoverPreparationFailure;

#ifdef __cplusplus
}
#endif

#endif	/* _HandoverPreparationFailure_H_ */
#include <asn_internal.h>
