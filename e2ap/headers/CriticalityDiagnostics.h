/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_CriticalityDiagnostics_H_
#define	_CriticalityDiagnostics_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ProcedureCode.h"
#include "TriggeringMessage.h"
#include "Criticality.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CriticalityDiagnostics_IE_List;
struct ProtocolExtensionContainer;

/* CriticalityDiagnostics */
typedef struct CriticalityDiagnostics {
	ProcedureCode_t	*procedureCode;	/* OPTIONAL */
	TriggeringMessage_t	*triggeringMessage;	/* OPTIONAL */
	Criticality_t	*procedureCriticality;	/* OPTIONAL */
	struct CriticalityDiagnostics_IE_List	*iEsCriticalityDiagnostics;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CriticalityDiagnostics_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CriticalityDiagnostics;

#ifdef __cplusplus
}
#endif

#endif	/* _CriticalityDiagnostics_H_ */
#include <asn_internal.h>
