/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-PDU-Descriptions"
 * 	found in "e2ap-v031.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_InitiatingMessage_H_
#define	_InitiatingMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ProcedureCode.h"
#include "Criticality.h"
#include <ANY.h>
#include <asn_ioc.h>
#include "RICsubscriptionRequest.h"
#include "RICsubscriptionResponse.h"
#include "RICsubscriptionFailure.h"
#include "RICsubscriptionDeleteRequest.h"
#include "RICsubscriptionDeleteResponse.h"
#include "RICsubscriptionDeleteFailure.h"
#include "RICserviceUpdate.h"
#include "RICserviceUpdateAcknowledge.h"
#include "RICserviceUpdateFailure.h"
#include "RICcontrolRequest.h"
#include "RICcontrolAcknowledge.h"
#include "RICcontrolFailure.h"
#include "X2SetupRequest.h"
#include "X2SetupResponse.h"
#include "X2SetupFailure.h"
#include "ENDCX2SetupRequest.h"
#include "ENDCX2SetupResponse.h"
#include "ENDCX2SetupFailure.h"
#include "ResourceStatusRequest.h"
#include "ResourceStatusResponse.h"
#include "ResourceStatusFailure.h"
#include "ENBConfigurationUpdate.h"
#include "ENBConfigurationUpdateAcknowledge.h"
#include "ENBConfigurationUpdateFailure.h"
#include "ENDCConfigurationUpdate.h"
#include "ENDCConfigurationUpdateAcknowledge.h"
#include "ENDCConfigurationUpdateFailure.h"
#include "ResetRequest.h"
#include "ResetResponse.h"
#include "RICindication.h"
#include "RICserviceQuery.h"
#include "LoadInformation.h"
#include "GNBStatusIndication.h"
#include "ResourceStatusUpdate.h"
#include "ErrorIndication.h"
#include <OPEN_TYPE.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum InitiatingMessage__value_PR {
	InitiatingMessage__value_PR_NOTHING,	/* No components present */
	InitiatingMessage__value_PR_RICsubscriptionRequest,
	InitiatingMessage__value_PR_RICsubscriptionDeleteRequest,
	InitiatingMessage__value_PR_RICserviceUpdate,
	InitiatingMessage__value_PR_RICcontrolRequest,
	InitiatingMessage__value_PR_X2SetupRequest,
	InitiatingMessage__value_PR_ENDCX2SetupRequest,
	InitiatingMessage__value_PR_ResourceStatusRequest,
	InitiatingMessage__value_PR_ENBConfigurationUpdate,
	InitiatingMessage__value_PR_ENDCConfigurationUpdate,
	InitiatingMessage__value_PR_ResetRequest,
	InitiatingMessage__value_PR_RICindication,
	InitiatingMessage__value_PR_RICserviceQuery,
	InitiatingMessage__value_PR_LoadInformation,
	InitiatingMessage__value_PR_GNBStatusIndication,
	InitiatingMessage__value_PR_ResourceStatusUpdate,
	InitiatingMessage__value_PR_ErrorIndication
} InitiatingMessage__value_PR;

/* InitiatingMessage */
typedef struct InitiatingMessage {
	ProcedureCode_t	 procedureCode;
	Criticality_t	 criticality;
	struct InitiatingMessage__value {
		InitiatingMessage__value_PR present;
		union InitiatingMessage__value_u {
			RICsubscriptionRequest_t	 RICsubscriptionRequest;
			RICsubscriptionDeleteRequest_t	 RICsubscriptionDeleteRequest;
			RICserviceUpdate_t	 RICserviceUpdate;
			RICcontrolRequest_t	 RICcontrolRequest;
			X2SetupRequest_t	 X2SetupRequest;
			ENDCX2SetupRequest_t	 ENDCX2SetupRequest;
			ResourceStatusRequest_t	 ResourceStatusRequest;
			ENBConfigurationUpdate_t	 ENBConfigurationUpdate;
			ENDCConfigurationUpdate_t	 ENDCConfigurationUpdate;
			ResetRequest_t	 ResetRequest;
			RICindication_t	 RICindication;
			RICserviceQuery_t	 RICserviceQuery;
			LoadInformation_t	 LoadInformation;
			GNBStatusIndication_t	 GNBStatusIndication;
			ResourceStatusUpdate_t	 ResourceStatusUpdate;
			ErrorIndication_t	 ErrorIndication;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InitiatingMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InitiatingMessage;
extern asn_SEQUENCE_specifics_t asn_SPC_InitiatingMessage_specs_1;
extern asn_TYPE_member_t asn_MBR_InitiatingMessage_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _InitiatingMessage_H_ */
#include <asn_internal.h>
