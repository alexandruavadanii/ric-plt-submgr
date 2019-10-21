/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#include "SubbandCQIItem.h"

#include "ProtocolExtensionContainer.h"
static int
memb_subbandIndex_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 27)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_subbandIndex_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_memb_subbandIndex_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  5,  5,  0,  27 }	/* (0..27,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_SubbandCQIItem_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SubbandCQIItem, subbandCQI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SubbandCQI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subbandCQI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SubbandCQIItem, subbandIndex),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_subbandIndex_constr_3, &asn_PER_memb_subbandIndex_constr_3,  memb_subbandIndex_constraint_1 },
		0, 0, /* No default value */
		"subbandIndex"
		},
	{ ATF_POINTER, 1, offsetof(struct SubbandCQIItem, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_7683P198,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_SubbandCQIItem_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_SubbandCQIItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SubbandCQIItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* subbandCQI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* subbandIndex */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_SubbandCQIItem_specs_1 = {
	sizeof(struct SubbandCQIItem),
	offsetof(struct SubbandCQIItem, _asn_ctx),
	asn_MAP_SubbandCQIItem_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_SubbandCQIItem_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SubbandCQIItem = {
	"SubbandCQIItem",
	"SubbandCQIItem",
	&asn_OP_SEQUENCE,
	asn_DEF_SubbandCQIItem_tags_1,
	sizeof(asn_DEF_SubbandCQIItem_tags_1)
		/sizeof(asn_DEF_SubbandCQIItem_tags_1[0]), /* 1 */
	asn_DEF_SubbandCQIItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_SubbandCQIItem_tags_1)
		/sizeof(asn_DEF_SubbandCQIItem_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SubbandCQIItem_1,
	3,	/* Elements count */
	&asn_SPC_SubbandCQIItem_specs_1	/* Additional specs */
};

