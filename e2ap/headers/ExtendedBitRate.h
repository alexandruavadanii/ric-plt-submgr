/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_ExtendedBitRate_H_
#define	_ExtendedBitRate_H_


#include <asn_application.h>

/* Including external dependencies */
#include <INTEGER.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ExtendedBitRate */
typedef INTEGER_t	 ExtendedBitRate_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ExtendedBitRate;
asn_struct_free_f ExtendedBitRate_free;
asn_struct_print_f ExtendedBitRate_print;
asn_constr_check_f ExtendedBitRate_constraint;
ber_type_decoder_f ExtendedBitRate_decode_ber;
der_type_encoder_f ExtendedBitRate_encode_der;
xer_type_decoder_f ExtendedBitRate_decode_xer;
xer_type_encoder_f ExtendedBitRate_encode_xer;
oer_type_decoder_f ExtendedBitRate_decode_oer;
oer_type_encoder_f ExtendedBitRate_encode_oer;
per_type_decoder_f ExtendedBitRate_decode_uper;
per_type_encoder_f ExtendedBitRate_encode_uper;
per_type_decoder_f ExtendedBitRate_decode_aper;
per_type_encoder_f ExtendedBitRate_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ExtendedBitRate_H_ */
#include <asn_internal.h>
