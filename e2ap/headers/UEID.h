/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_UEID_H_
#define	_UEID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UEID */
typedef BIT_STRING_t	 UEID_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_UEID_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_UEID;
asn_struct_free_f UEID_free;
asn_struct_print_f UEID_print;
asn_constr_check_f UEID_constraint;
ber_type_decoder_f UEID_decode_ber;
der_type_encoder_f UEID_encode_der;
xer_type_decoder_f UEID_decode_xer;
xer_type_encoder_f UEID_encode_xer;
oer_type_decoder_f UEID_decode_oer;
oer_type_encoder_f UEID_encode_oer;
per_type_decoder_f UEID_decode_uper;
per_type_encoder_f UEID_encode_uper;
per_type_decoder_f UEID_decode_aper;
per_type_encoder_f UEID_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _UEID_H_ */
#include <asn_internal.h>
