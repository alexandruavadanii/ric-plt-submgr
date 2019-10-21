/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_TDD_InfoServedNRCell_Information_H_
#define	_TDD_InfoServedNRCell_Information_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NRFreqInfo.h"
#include "NR-TxBW.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* TDD-InfoServedNRCell-Information */
typedef struct TDD_InfoServedNRCell_Information {
	NRFreqInfo_t	 nRFreqInfo;
	NR_TxBW_t	 nR_TxBW;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TDD_InfoServedNRCell_Information_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TDD_InfoServedNRCell_Information;
extern asn_SEQUENCE_specifics_t asn_SPC_TDD_InfoServedNRCell_Information_specs_1;
extern asn_TYPE_member_t asn_MBR_TDD_InfoServedNRCell_Information_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _TDD_InfoServedNRCell_Information_H_ */
#include <asn_internal.h>
