/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-gNB-X2-IEs"
 * 	found in "Spec/e2ap-v031ex.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_E2SM_gNB_X2_controlMessage_H_
#define	_E2SM_gNB_X2_controlMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "InterfaceMessage.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* E2SM-gNB-X2-controlMessage */
typedef struct E2SM_gNB_X2_controlMessage {
	InterfaceMessage_t	 interfaceMessage;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2SM_gNB_X2_controlMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2SM_gNB_X2_controlMessage;

#ifdef __cplusplus
}
#endif

#endif	/* _E2SM_gNB_X2_controlMessage_H_ */
#include <asn_internal.h>