/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_PRACH_Configuration_H_
#define	_PRACH_Configuration_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* PRACH-Configuration */
typedef struct PRACH_Configuration {
	long	 rootSequenceIndex;
	long	 zeroCorrelationIndex;
	BOOLEAN_t	 highSpeedFlag;
	long	 prach_FreqOffset;
	long	*prach_ConfigIndex;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PRACH_Configuration_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PRACH_Configuration;

#ifdef __cplusplus
}
#endif

#endif	/* _PRACH_Configuration_H_ */
#include <asn_internal.h>
