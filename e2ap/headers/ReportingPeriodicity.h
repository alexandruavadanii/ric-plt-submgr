/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_ReportingPeriodicity_H_
#define	_ReportingPeriodicity_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ReportingPeriodicity {
	ReportingPeriodicity_one_thousand_ms	= 0,
	ReportingPeriodicity_two_thousand_ms	= 1,
	ReportingPeriodicity_five_thousand_ms	= 2,
	ReportingPeriodicity_ten_thousand_ms	= 3
	/*
	 * Enumeration is extensible
	 */
} e_ReportingPeriodicity;

/* ReportingPeriodicity */
typedef long	 ReportingPeriodicity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ReportingPeriodicity;
asn_struct_free_f ReportingPeriodicity_free;
asn_struct_print_f ReportingPeriodicity_print;
asn_constr_check_f ReportingPeriodicity_constraint;
ber_type_decoder_f ReportingPeriodicity_decode_ber;
der_type_encoder_f ReportingPeriodicity_encode_der;
xer_type_decoder_f ReportingPeriodicity_decode_xer;
xer_type_encoder_f ReportingPeriodicity_encode_xer;
oer_type_decoder_f ReportingPeriodicity_decode_oer;
oer_type_encoder_f ReportingPeriodicity_encode_oer;
per_type_decoder_f ReportingPeriodicity_decode_uper;
per_type_encoder_f ReportingPeriodicity_encode_uper;
per_type_decoder_f ReportingPeriodicity_decode_aper;
per_type_encoder_f ReportingPeriodicity_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ReportingPeriodicity_H_ */
#include <asn_internal.h>
