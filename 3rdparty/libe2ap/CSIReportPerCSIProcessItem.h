/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "Spec/e2_and_x2-combined-and-minimized.asn1"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example`
 */

#ifndef	_CSIReportPerCSIProcessItem_H_
#define	_CSIReportPerCSIProcessItem_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "NativeInteger.h"
#include "WidebandCQI.h"
#include "SubbandSize.h"
#include "constr_SEQUENCE.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SubbandCQIList;
struct ProtocolExtensionContainer;

/* Forward definitions */
typedef struct CSIReportPerCSIProcessItem__Member {
	long	 rI;
	WidebandCQI_t	 widebandCQI;
	SubbandSize_t	 subbandSize;
	struct SubbandCQIList	*subbandCQIList;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSIReportPerCSIProcessItem__Member;

/* CSIReportPerCSIProcessItem */
typedef struct CSIReportPerCSIProcessItem {
	A_SEQUENCE_OF(CSIReportPerCSIProcessItem__Member) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSIReportPerCSIProcessItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CSIReportPerCSIProcessItem;
extern asn_SET_OF_specifics_t asn_SPC_CSIReportPerCSIProcessItem_specs_1;
extern asn_TYPE_member_t asn_MBR_CSIReportPerCSIProcessItem_1[1];
extern asn_per_constraints_t asn_PER_type_CSIReportPerCSIProcessItem_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _CSIReportPerCSIProcessItem_H_ */
#include "asn_internal.h"
