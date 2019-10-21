/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_ReplacingCellsList_Item_H_
#define	_ReplacingCellsList_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ECGI.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ReplacingCellsList-Item */
typedef struct ReplacingCellsList_Item {
	ECGI_t	 eCGI;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ReplacingCellsList_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ReplacingCellsList_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_ReplacingCellsList_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_ReplacingCellsList_Item_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _ReplacingCellsList_Item_H_ */
#include <asn_internal.h>
