/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_SubbandSize_H_
#define	_SubbandSize_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SubbandSize {
	SubbandSize_size2	= 0,
	SubbandSize_size3	= 1,
	SubbandSize_size4	= 2,
	SubbandSize_size6	= 3,
	SubbandSize_size8	= 4
	/*
	 * Enumeration is extensible
	 */
} e_SubbandSize;

/* SubbandSize */
typedef long	 SubbandSize_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SubbandSize_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SubbandSize;
extern const asn_INTEGER_specifics_t asn_SPC_SubbandSize_specs_1;
asn_struct_free_f SubbandSize_free;
asn_struct_print_f SubbandSize_print;
asn_constr_check_f SubbandSize_constraint;
ber_type_decoder_f SubbandSize_decode_ber;
der_type_encoder_f SubbandSize_encode_der;
xer_type_decoder_f SubbandSize_decode_xer;
xer_type_encoder_f SubbandSize_encode_xer;
oer_type_decoder_f SubbandSize_decode_oer;
oer_type_encoder_f SubbandSize_encode_oer;
per_type_decoder_f SubbandSize_decode_uper;
per_type_encoder_f SubbandSize_encode_uper;
per_type_decoder_f SubbandSize_decode_aper;
per_type_encoder_f SubbandSize_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _SubbandSize_H_ */
#include <asn_internal.h>