/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_UEsToBeResetList_Item_H_
#define	_UEsToBeResetList_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UE-X2AP-ID.h"
#include "UE-X2AP-ID-Extension.h"
#include "SgNB-UE-X2AP-ID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* UEsToBeResetList-Item */
typedef struct UEsToBeResetList_Item {
	UE_X2AP_ID_t	 meNB_ID;
	UE_X2AP_ID_Extension_t	*meNB_ID_ext;	/* OPTIONAL */
	SgNB_UE_X2AP_ID_t	*sgNB_ID;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEsToBeResetList_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEsToBeResetList_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_UEsToBeResetList_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_UEsToBeResetList_Item_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _UEsToBeResetList_Item_H_ */
#include <asn_internal.h>