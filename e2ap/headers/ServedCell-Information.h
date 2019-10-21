/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_ServedCell_Information_H_
#define	_ServedCell_Information_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PCI.h"
#include "ECGI.h"
#include "TAC.h"
#include "BroadcastPLMNs-Item.h"
#include "EUTRA-Mode-Info.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* ServedCell-Information */
typedef struct ServedCell_Information {
	PCI_t	 pCI;
	ECGI_t	 cellId;
	TAC_t	 tAC;
	BroadcastPLMNs_Item_t	 broadcastPLMNs;
	EUTRA_Mode_Info_t	 eUTRA_Mode_Info;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ServedCell_Information_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ServedCell_Information;
extern asn_SEQUENCE_specifics_t asn_SPC_ServedCell_Information_specs_1;
extern asn_TYPE_member_t asn_MBR_ServedCell_Information_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _ServedCell_Information_H_ */
#include <asn_internal.h>
