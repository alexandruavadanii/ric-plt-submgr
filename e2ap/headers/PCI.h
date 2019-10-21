/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#ifndef	_PCI_H_
#define	_PCI_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PCI */
typedef long	 PCI_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_PCI_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_PCI;
asn_struct_free_f PCI_free;
asn_struct_print_f PCI_print;
asn_constr_check_f PCI_constraint;
ber_type_decoder_f PCI_decode_ber;
der_type_encoder_f PCI_encode_der;
xer_type_decoder_f PCI_decode_xer;
xer_type_encoder_f PCI_encode_xer;
oer_type_decoder_f PCI_decode_oer;
oer_type_encoder_f PCI_encode_oer;
per_type_decoder_f PCI_decode_uper;
per_type_encoder_f PCI_encode_uper;
per_type_decoder_f PCI_decode_aper;
per_type_encoder_f PCI_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _PCI_H_ */
#include <asn_internal.h>
