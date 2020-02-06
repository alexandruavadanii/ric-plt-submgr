/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_SubframeType_H_
#define	_SubframeType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SubframeType {
	SubframeType_mbsfn	= 0,
	SubframeType_nonmbsfn	= 1
	/*
	 * Enumeration is extensible
	 */
} e_SubframeType;

/* SubframeType */
typedef long	 SubframeType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SubframeType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SubframeType;
extern const asn_INTEGER_specifics_t asn_SPC_SubframeType_specs_1;
asn_struct_free_f SubframeType_free;
asn_struct_print_f SubframeType_print;
asn_constr_check_f SubframeType_constraint;
ber_type_decoder_f SubframeType_decode_ber;
der_type_encoder_f SubframeType_encode_der;
xer_type_decoder_f SubframeType_decode_xer;
xer_type_encoder_f SubframeType_encode_xer;
oer_type_decoder_f SubframeType_decode_oer;
oer_type_encoder_f SubframeType_encode_oer;
per_type_decoder_f SubframeType_decode_uper;
per_type_encoder_f SubframeType_encode_uper;
per_type_decoder_f SubframeType_decode_aper;
per_type_encoder_f SubframeType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _SubframeType_H_ */
#include <asn_internal.h>