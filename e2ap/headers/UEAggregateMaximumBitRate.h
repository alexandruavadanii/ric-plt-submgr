/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_UEAggregateMaximumBitRate_H_
#define	_UEAggregateMaximumBitRate_H_


#include <asn_application.h>

/* Including external dependencies */
#include "BitRate.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* UEAggregateMaximumBitRate */
typedef struct UEAggregateMaximumBitRate {
	BitRate_t	 uEaggregateMaximumBitRateDownlink;
	BitRate_t	 uEaggregateMaximumBitRateUplink;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UEAggregateMaximumBitRate_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UEAggregateMaximumBitRate;
extern asn_SEQUENCE_specifics_t asn_SPC_UEAggregateMaximumBitRate_specs_1;
extern asn_TYPE_member_t asn_MBR_UEAggregateMaximumBitRate_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _UEAggregateMaximumBitRate_H_ */
#include <asn_internal.h>
