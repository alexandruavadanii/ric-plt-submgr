/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_IntegrityProtectionAlgorithms_H_
#define	_IntegrityProtectionAlgorithms_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* IntegrityProtectionAlgorithms */
typedef BIT_STRING_t	 IntegrityProtectionAlgorithms_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_IntegrityProtectionAlgorithms_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_IntegrityProtectionAlgorithms;
asn_struct_free_f IntegrityProtectionAlgorithms_free;
asn_struct_print_f IntegrityProtectionAlgorithms_print;
asn_constr_check_f IntegrityProtectionAlgorithms_constraint;
ber_type_decoder_f IntegrityProtectionAlgorithms_decode_ber;
der_type_encoder_f IntegrityProtectionAlgorithms_encode_der;
xer_type_decoder_f IntegrityProtectionAlgorithms_decode_xer;
xer_type_encoder_f IntegrityProtectionAlgorithms_encode_xer;
oer_type_decoder_f IntegrityProtectionAlgorithms_decode_oer;
oer_type_encoder_f IntegrityProtectionAlgorithms_encode_oer;
per_type_decoder_f IntegrityProtectionAlgorithms_decode_uper;
per_type_encoder_f IntegrityProtectionAlgorithms_encode_uper;
per_type_decoder_f IntegrityProtectionAlgorithms_decode_aper;
per_type_encoder_f IntegrityProtectionAlgorithms_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _IntegrityProtectionAlgorithms_H_ */
#include <asn_internal.h>
