/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_CoMPInformationItem_H_
#define	_CoMPInformationItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include "CoMPHypothesisSet.h"
#include "BenefitMetric.h"
#include <constr_SEQUENCE.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* Forward definitions */
typedef struct CoMPInformationItem__Member {
	CoMPHypothesisSet_t	 coMPHypothesisSet;
	BenefitMetric_t	 benefitMetric;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CoMPInformationItem__Member;

/* CoMPInformationItem */
typedef struct CoMPInformationItem {
	A_SEQUENCE_OF(CoMPInformationItem__Member) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CoMPInformationItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CoMPInformationItem;
extern asn_SET_OF_specifics_t asn_SPC_CoMPInformationItem_specs_1;
extern asn_TYPE_member_t asn_MBR_CoMPInformationItem_1[1];
extern asn_per_constraints_t asn_PER_type_CoMPInformationItem_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _CoMPInformationItem_H_ */
#include <asn_internal.h>
