/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_SCGChangeIndication_H_
#define	_SCGChangeIndication_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SCGChangeIndication {
	SCGChangeIndication_pDCPCountWrapAround	= 0,
	SCGChangeIndication_pSCellChange	= 1,
	SCGChangeIndication_other	= 2
	/*
	 * Enumeration is extensible
	 */
} e_SCGChangeIndication;

/* SCGChangeIndication */
typedef long	 SCGChangeIndication_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SCGChangeIndication;
asn_struct_free_f SCGChangeIndication_free;
asn_struct_print_f SCGChangeIndication_print;
asn_constr_check_f SCGChangeIndication_constraint;
ber_type_decoder_f SCGChangeIndication_decode_ber;
der_type_encoder_f SCGChangeIndication_encode_der;
xer_type_decoder_f SCGChangeIndication_decode_xer;
xer_type_encoder_f SCGChangeIndication_encode_xer;
oer_type_decoder_f SCGChangeIndication_decode_oer;
oer_type_encoder_f SCGChangeIndication_encode_oer;
per_type_decoder_f SCGChangeIndication_decode_uper;
per_type_encoder_f SCGChangeIndication_encode_uper;
per_type_decoder_f SCGChangeIndication_decode_aper;
per_type_encoder_f SCGChangeIndication_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _SCGChangeIndication_H_ */
#include <asn_internal.h>
