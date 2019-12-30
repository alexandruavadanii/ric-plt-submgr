/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "Spec/e2_and_x2-combined-and-minimized.asn1"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example`
 */

#ifndef	_X2SetupFailure_H_
#define	_X2SetupFailure_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ProtocolIE-Container.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* X2SetupFailure */
typedef struct X2SetupFailure {
	ProtocolIE_Container_8807P19_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2SetupFailure_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2SetupFailure;
extern asn_SEQUENCE_specifics_t asn_SPC_X2SetupFailure_specs_1;
extern asn_TYPE_member_t asn_MBR_X2SetupFailure_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _X2SetupFailure_H_ */
#include "asn_internal.h"