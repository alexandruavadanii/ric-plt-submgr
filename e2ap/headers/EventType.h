/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_EventType_H_
#define	_EventType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EventType {
	EventType_change_of_serving_cell	= 0
	/*
	 * Enumeration is extensible
	 */
} e_EventType;

/* EventType */
typedef long	 EventType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_EventType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_EventType;
extern const asn_INTEGER_specifics_t asn_SPC_EventType_specs_1;
asn_struct_free_f EventType_free;
asn_struct_print_f EventType_print;
asn_constr_check_f EventType_constraint;
ber_type_decoder_f EventType_decode_ber;
der_type_encoder_f EventType_encode_der;
xer_type_decoder_f EventType_decode_xer;
xer_type_encoder_f EventType_encode_xer;
oer_type_decoder_f EventType_decode_oer;
oer_type_encoder_f EventType_encode_oer;
per_type_decoder_f EventType_decode_uper;
per_type_encoder_f EventType_encode_uper;
per_type_decoder_f EventType_decode_aper;
per_type_encoder_f EventType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _EventType_H_ */
#include <asn_internal.h>
