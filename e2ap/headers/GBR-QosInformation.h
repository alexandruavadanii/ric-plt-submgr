/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_GBR_QosInformation_H_
#define	_GBR_QosInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "BitRate.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* GBR-QosInformation */
typedef struct GBR_QosInformation {
	BitRate_t	 e_RAB_MaximumBitrateDL;
	BitRate_t	 e_RAB_MaximumBitrateUL;
	BitRate_t	 e_RAB_GuaranteedBitrateDL;
	BitRate_t	 e_RAB_GuaranteedBitrateUL;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GBR_QosInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GBR_QosInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_GBR_QosInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_GBR_QosInformation_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _GBR_QosInformation_H_ */
#include <asn_internal.h>
