/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-PDU-Contents"
 * 	found in "e2ap-v031.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_RICaction_Admitted_Item_H_
#define	_RICaction_Admitted_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RICactionID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RICaction-Admitted-Item */
typedef struct RICaction_Admitted_Item {
	RICactionID_t	 ricActionID;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RICaction_Admitted_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RICaction_Admitted_Item;

#ifdef __cplusplus
}
#endif

#endif	/* _RICaction_Admitted_Item_H_ */
#include <asn_internal.h>
