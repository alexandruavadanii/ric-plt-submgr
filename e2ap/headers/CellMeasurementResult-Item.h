/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_CellMeasurementResult_Item_H_
#define	_CellMeasurementResult_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ECGI.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct HWLoadIndicator;
struct S1TNLLoadIndicator;
struct RadioResourceStatus;
struct ProtocolExtensionContainer;

/* CellMeasurementResult-Item */
typedef struct CellMeasurementResult_Item {
	ECGI_t	 cell_ID;
	struct HWLoadIndicator	*hWLoadIndicator;	/* OPTIONAL */
	struct S1TNLLoadIndicator	*s1TNLLoadIndicator;	/* OPTIONAL */
	struct RadioResourceStatus	*radioResourceStatus;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellMeasurementResult_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellMeasurementResult_Item;

#ifdef __cplusplus
}
#endif

#endif	/* _CellMeasurementResult_Item_H_ */
#include <asn_internal.h>
