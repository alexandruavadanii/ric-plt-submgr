/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#include "Masked-IMEISV.h"

int
Masked_IMEISV_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 64)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using BIT_STRING,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_Masked_IMEISV_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	64	/* (SIZE(64..64)) */};
static asn_per_constraints_t asn_PER_type_Masked_IMEISV_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  64,  64 }	/* (SIZE(64..64)) */,
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_Masked_IMEISV_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (3 << 2))
};
asn_TYPE_descriptor_t asn_DEF_Masked_IMEISV = {
	"Masked-IMEISV",
	"Masked-IMEISV",
	&asn_OP_BIT_STRING,
	asn_DEF_Masked_IMEISV_tags_1,
	sizeof(asn_DEF_Masked_IMEISV_tags_1)
		/sizeof(asn_DEF_Masked_IMEISV_tags_1[0]), /* 1 */
	asn_DEF_Masked_IMEISV_tags_1,	/* Same as above */
	sizeof(asn_DEF_Masked_IMEISV_tags_1)
		/sizeof(asn_DEF_Masked_IMEISV_tags_1[0]), /* 1 */
	{ &asn_OER_type_Masked_IMEISV_constr_1, &asn_PER_type_Masked_IMEISV_constr_1, Masked_IMEISV_constraint },
	0, 0,	/* No members */
	&asn_SPC_BIT_STRING_specs	/* Additional specs */
};

