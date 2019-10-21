/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_InitiatingNodeType_EndcX2Removal_H_
#define	_InitiatingNodeType_EndcX2Removal_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum InitiatingNodeType_EndcX2Removal_PR {
	InitiatingNodeType_EndcX2Removal_PR_NOTHING,	/* No components present */
	InitiatingNodeType_EndcX2Removal_PR_init_eNB,
	InitiatingNodeType_EndcX2Removal_PR_init_en_gNB
	/* Extensions may appear below */
	
} InitiatingNodeType_EndcX2Removal_PR;

/* Forward declarations */
struct ProtocolIE_Container;

/* InitiatingNodeType-EndcX2Removal */
typedef struct InitiatingNodeType_EndcX2Removal {
	InitiatingNodeType_EndcX2Removal_PR present;
	union InitiatingNodeType_EndcX2Removal_u {
		struct ProtocolIE_Container	*init_eNB;
		struct ProtocolIE_Container	*init_en_gNB;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InitiatingNodeType_EndcX2Removal_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InitiatingNodeType_EndcX2Removal;

#ifdef __cplusplus
}
#endif

#endif	/* _InitiatingNodeType_EndcX2Removal_H_ */
#include <asn_internal.h>
