/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-IEs"
 * 	found in "e2ap-v031.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_RICcontrolStatus_H_
#define	_RICcontrolStatus_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RICcontrolStatus {
	RICcontrolStatus_success	= 0,
	RICcontrolStatus_rejected	= 1,
	RICcontrolStatus_failed	= 2
	/*
	 * Enumeration is extensible
	 */
} e_RICcontrolStatus;

/* RICcontrolStatus */
typedef long	 RICcontrolStatus_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RICcontrolStatus;
asn_struct_free_f RICcontrolStatus_free;
asn_struct_print_f RICcontrolStatus_print;
asn_constr_check_f RICcontrolStatus_constraint;
ber_type_decoder_f RICcontrolStatus_decode_ber;
der_type_encoder_f RICcontrolStatus_encode_der;
xer_type_decoder_f RICcontrolStatus_decode_xer;
xer_type_encoder_f RICcontrolStatus_encode_xer;
oer_type_decoder_f RICcontrolStatus_decode_oer;
oer_type_encoder_f RICcontrolStatus_encode_oer;
per_type_decoder_f RICcontrolStatus_decode_uper;
per_type_encoder_f RICcontrolStatus_encode_uper;
per_type_decoder_f RICcontrolStatus_decode_aper;
per_type_encoder_f RICcontrolStatus_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RICcontrolStatus_H_ */
#include <asn_internal.h>
