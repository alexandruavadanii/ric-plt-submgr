/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_ListofEUTRACellsinNRCoordinationReq_H_
#define	_ListofEUTRACellsinNRCoordinationReq_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ECGI;

/* ListofEUTRACellsinNRCoordinationReq */
typedef struct ListofEUTRACellsinNRCoordinationReq {
	A_SEQUENCE_OF(struct ECGI) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ListofEUTRACellsinNRCoordinationReq_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ListofEUTRACellsinNRCoordinationReq;

#ifdef __cplusplus
}
#endif

#endif	/* _ListofEUTRACellsinNRCoordinationReq_H_ */
#include <asn_internal.h>
