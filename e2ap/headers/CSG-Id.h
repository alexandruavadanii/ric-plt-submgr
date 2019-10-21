/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_CSG_Id_H_
#define	_CSG_Id_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CSG-Id */
typedef BIT_STRING_t	 CSG_Id_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CSG_Id;
asn_struct_free_f CSG_Id_free;
asn_struct_print_f CSG_Id_print;
asn_constr_check_f CSG_Id_constraint;
ber_type_decoder_f CSG_Id_decode_ber;
der_type_encoder_f CSG_Id_encode_der;
xer_type_decoder_f CSG_Id_decode_xer;
xer_type_encoder_f CSG_Id_encode_xer;
oer_type_decoder_f CSG_Id_decode_oer;
oer_type_encoder_f CSG_Id_encode_oer;
per_type_decoder_f CSG_Id_decode_uper;
per_type_encoder_f CSG_Id_encode_uper;
per_type_decoder_f CSG_Id_decode_aper;
per_type_encoder_f CSG_Id_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _CSG_Id_H_ */
#include <asn_internal.h>
