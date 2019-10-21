/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_ERABActivityNotifyItem_H_
#define	_ERABActivityNotifyItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "E-RAB-ID.h"
#include "UserPlaneTrafficActivityReport.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* ERABActivityNotifyItem */
typedef struct ERABActivityNotifyItem {
	E_RAB_ID_t	 e_RAB_ID;
	UserPlaneTrafficActivityReport_t	 activityReport;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ERABActivityNotifyItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ERABActivityNotifyItem;
extern asn_SEQUENCE_specifics_t asn_SPC_ERABActivityNotifyItem_specs_1;
extern asn_TYPE_member_t asn_MBR_ERABActivityNotifyItem_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _ERABActivityNotifyItem_H_ */
#include <asn_internal.h>
