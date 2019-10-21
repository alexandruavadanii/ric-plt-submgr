/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_E_RABs_Admitted_ToBeModified_ModAckItem_H_
#define	_E_RABs_Admitted_ToBeModified_ModAckItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum E_RABs_Admitted_ToBeModified_ModAckItem_PR {
	E_RABs_Admitted_ToBeModified_ModAckItem_PR_NOTHING,	/* No components present */
	E_RABs_Admitted_ToBeModified_ModAckItem_PR_sCG_Bearer,
	E_RABs_Admitted_ToBeModified_ModAckItem_PR_split_Bearer
	/* Extensions may appear below */
	
} E_RABs_Admitted_ToBeModified_ModAckItem_PR;

/* Forward declarations */
struct E_RABs_Admitted_ToBeModified_ModAckItem_SCG_Bearer;
struct E_RABs_Admitted_ToBeModified_ModAckItem_Split_Bearer;

/* E-RABs-Admitted-ToBeModified-ModAckItem */
typedef struct E_RABs_Admitted_ToBeModified_ModAckItem {
	E_RABs_Admitted_ToBeModified_ModAckItem_PR present;
	union E_RABs_Admitted_ToBeModified_ModAckItem_u {
		struct E_RABs_Admitted_ToBeModified_ModAckItem_SCG_Bearer	*sCG_Bearer;
		struct E_RABs_Admitted_ToBeModified_ModAckItem_Split_Bearer	*split_Bearer;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E_RABs_Admitted_ToBeModified_ModAckItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E_RABs_Admitted_ToBeModified_ModAckItem;

#ifdef __cplusplus
}
#endif

#endif	/* _E_RABs_Admitted_ToBeModified_ModAckItem_H_ */
#include <asn_internal.h>
