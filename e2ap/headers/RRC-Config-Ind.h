/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "Spec/e2ap-v031ex.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_RRC_Config_Ind_H_
#define	_RRC_Config_Ind_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_Config_Ind {
	RRC_Config_Ind_full_config	= 0,
	RRC_Config_Ind_delta_config	= 1
	/*
	 * Enumeration is extensible
	 */
} e_RRC_Config_Ind;

/* RRC-Config-Ind */
typedef long	 RRC_Config_Ind_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_Config_Ind;
asn_struct_free_f RRC_Config_Ind_free;
asn_struct_print_f RRC_Config_Ind_print;
asn_constr_check_f RRC_Config_Ind_constraint;
ber_type_decoder_f RRC_Config_Ind_decode_ber;
der_type_encoder_f RRC_Config_Ind_encode_der;
xer_type_decoder_f RRC_Config_Ind_decode_xer;
xer_type_encoder_f RRC_Config_Ind_encode_xer;
oer_type_decoder_f RRC_Config_Ind_decode_oer;
oer_type_encoder_f RRC_Config_Ind_encode_oer;
per_type_decoder_f RRC_Config_Ind_decode_uper;
per_type_encoder_f RRC_Config_Ind_encode_uper;
per_type_decoder_f RRC_Config_Ind_decode_aper;
per_type_encoder_f RRC_Config_Ind_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_Config_Ind_H_ */
#include <asn_internal.h>