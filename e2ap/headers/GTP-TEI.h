/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_GTP_TEI_H_
#define	_GTP_TEI_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GTP-TEI */
typedef OCTET_STRING_t	 GTP_TEI_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_GTP_TEI_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_GTP_TEI;
asn_struct_free_f GTP_TEI_free;
asn_struct_print_f GTP_TEI_print;
asn_constr_check_f GTP_TEI_constraint;
ber_type_decoder_f GTP_TEI_decode_ber;
der_type_encoder_f GTP_TEI_encode_der;
xer_type_decoder_f GTP_TEI_decode_xer;
xer_type_encoder_f GTP_TEI_encode_xer;
oer_type_decoder_f GTP_TEI_decode_oer;
oer_type_encoder_f GTP_TEI_encode_oer;
per_type_decoder_f GTP_TEI_decode_uper;
per_type_encoder_f GTP_TEI_encode_uper;
per_type_decoder_f GTP_TEI_decode_aper;
per_type_encoder_f GTP_TEI_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _GTP_TEI_H_ */
#include <asn_internal.h>
