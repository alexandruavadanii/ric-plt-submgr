/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#include "WidebandCQICodeword1.h"

static int
memb_four_bitCQI_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_three_bitSpatialDifferentialCQI_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 7)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_four_bitCQI_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_memb_four_bitCQI_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  4,  4,  0,  15 }	/* (0..15,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_three_bitSpatialDifferentialCQI_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_memb_three_bitSpatialDifferentialCQI_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  7 }	/* (0..7,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_WidebandCQICodeword1_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_WidebandCQICodeword1_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_WidebandCQICodeword1_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct WidebandCQICodeword1, choice.four_bitCQI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_four_bitCQI_constr_2, &asn_PER_memb_four_bitCQI_constr_2,  memb_four_bitCQI_constraint_1 },
		0, 0, /* No default value */
		"four-bitCQI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct WidebandCQICodeword1, choice.three_bitSpatialDifferentialCQI),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_three_bitSpatialDifferentialCQI_constr_3, &asn_PER_memb_three_bitSpatialDifferentialCQI_constr_3,  memb_three_bitSpatialDifferentialCQI_constraint_1 },
		0, 0, /* No default value */
		"three-bitSpatialDifferentialCQI"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_WidebandCQICodeword1_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* four-bitCQI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* three-bitSpatialDifferentialCQI */
};
asn_CHOICE_specifics_t asn_SPC_WidebandCQICodeword1_specs_1 = {
	sizeof(struct WidebandCQICodeword1),
	offsetof(struct WidebandCQICodeword1, _asn_ctx),
	offsetof(struct WidebandCQICodeword1, present),
	sizeof(((struct WidebandCQICodeword1 *)0)->present),
	asn_MAP_WidebandCQICodeword1_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_WidebandCQICodeword1 = {
	"WidebandCQICodeword1",
	"WidebandCQICodeword1",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_WidebandCQICodeword1_constr_1, &asn_PER_type_WidebandCQICodeword1_constr_1, CHOICE_constraint },
	asn_MBR_WidebandCQICodeword1_1,
	2,	/* Elements count */
	&asn_SPC_WidebandCQICodeword1_specs_1	/* Additional specs */
};

