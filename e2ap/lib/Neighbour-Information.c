/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#include "Neighbour-Information.h"

#include "ProtocolExtensionContainer.h"
static asn_oer_constraints_t asn_OER_type_Neighbour_Information_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..512)) */};
asn_per_constraints_t asn_PER_type_Neighbour_Information_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 10,  10,  0,  512 }	/* (SIZE(0..512)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_Member_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Neighbour_Information__Member, eCGI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ECGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eCGI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Neighbour_Information__Member, pCI),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PCI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pCI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Neighbour_Information__Member, eARFCN),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EARFCN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eARFCN"
		},
	{ ATF_POINTER, 1, offsetof(struct Neighbour_Information__Member, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_7683P172,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_Member_oms_2[] = { 3 };
static const ber_tlv_tag_t asn_DEF_Member_tags_2[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Member_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eCGI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pCI */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* eARFCN */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_Member_specs_2 = {
	sizeof(struct Neighbour_Information__Member),
	offsetof(struct Neighbour_Information__Member, _asn_ctx),
	asn_MAP_Member_tag2el_2,
	4,	/* Count of tags in the map */
	asn_MAP_Member_oms_2,	/* Optional members */
	1, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_Member_2 = {
	"SEQUENCE",
	"SEQUENCE",
	&asn_OP_SEQUENCE,
	asn_DEF_Member_tags_2,
	sizeof(asn_DEF_Member_tags_2)
		/sizeof(asn_DEF_Member_tags_2[0]), /* 1 */
	asn_DEF_Member_tags_2,	/* Same as above */
	sizeof(asn_DEF_Member_tags_2)
		/sizeof(asn_DEF_Member_tags_2[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Member_2,
	4,	/* Elements count */
	&asn_SPC_Member_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_Neighbour_Information_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Member_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_Neighbour_Information_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_Neighbour_Information_specs_1 = {
	sizeof(struct Neighbour_Information),
	offsetof(struct Neighbour_Information, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_Neighbour_Information = {
	"Neighbour-Information",
	"Neighbour-Information",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_Neighbour_Information_tags_1,
	sizeof(asn_DEF_Neighbour_Information_tags_1)
		/sizeof(asn_DEF_Neighbour_Information_tags_1[0]), /* 1 */
	asn_DEF_Neighbour_Information_tags_1,	/* Same as above */
	sizeof(asn_DEF_Neighbour_Information_tags_1)
		/sizeof(asn_DEF_Neighbour_Information_tags_1[0]), /* 1 */
	{ &asn_OER_type_Neighbour_Information_constr_1, &asn_PER_type_Neighbour_Information_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_Neighbour_Information_1,
	1,	/* Single element */
	&asn_SPC_Neighbour_Information_specs_1	/* Additional specs */
};

