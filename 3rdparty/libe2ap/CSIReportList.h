/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "Spec/e2_and_x2-combined-and-minimized.asn1"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example`
 */

#ifndef	_CSIReportList_H_
#define	_CSIReportList_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "UEID.h"
#include "CSIReportPerCSIProcess.h"
#include "constr_SEQUENCE.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* Forward definitions */
typedef struct CSIReportList__Member {
	UEID_t	 uEID;
	CSIReportPerCSIProcess_t	 cSIReportPerCSIProcess;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSIReportList__Member;

/* CSIReportList */
typedef struct CSIReportList {
	A_SEQUENCE_OF(CSIReportList__Member) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSIReportList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CSIReportList;

#ifdef __cplusplus
}
#endif

#endif	/* _CSIReportList_H_ */
#include "asn_internal.h"
