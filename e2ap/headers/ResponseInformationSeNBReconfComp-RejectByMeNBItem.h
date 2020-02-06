/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_ResponseInformationSeNBReconfComp_RejectByMeNBItem_H_
#define	_ResponseInformationSeNBReconfComp_RejectByMeNBItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Cause.h"
#include "MeNBtoSeNBContainer.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* ResponseInformationSeNBReconfComp-RejectByMeNBItem */
typedef struct ResponseInformationSeNBReconfComp_RejectByMeNBItem {
	Cause_t	 cause;
	MeNBtoSeNBContainer_t	*meNBtoSeNBContainer;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ResponseInformationSeNBReconfComp_RejectByMeNBItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ResponseInformationSeNBReconfComp_RejectByMeNBItem;
extern asn_SEQUENCE_specifics_t asn_SPC_ResponseInformationSeNBReconfComp_RejectByMeNBItem_specs_1;
extern asn_TYPE_member_t asn_MBR_ResponseInformationSeNBReconfComp_RejectByMeNBItem_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _ResponseInformationSeNBReconfComp_RejectByMeNBItem_H_ */
#include <asn_internal.h>