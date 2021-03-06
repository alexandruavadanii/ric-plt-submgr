/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "Spec/e2_and_x2-combined-and-minimized.asn1"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example`
 */

#ifndef	_NR_TxBW_H_
#define	_NR_TxBW_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NRSCS.h"
#include "NRNRB.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* NR-TxBW */
typedef struct NR_TxBW {
	NRSCS_t	 nRSCS;
	NRNRB_t	 nRNRB;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_TxBW_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_TxBW;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_TxBW_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_TxBW_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_TxBW_H_ */
#include "asn_internal.h"
