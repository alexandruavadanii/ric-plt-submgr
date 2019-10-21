/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#include "ServedNRCell-Information.h"

#include "ProtocolExtensionContainer.h"
#include "FDD-InfoServedNRCell-Information.h"
#include "TDD-InfoServedNRCell-Information.h"
static asn_oer_constraints_t asn_OER_type_nrModeInfo_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_nrModeInfo_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_nrModeInfo_7[] = {
	{ ATF_POINTER, 0, offsetof(struct ServedNRCell_Information__nrModeInfo, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FDD_InfoServedNRCell_Information,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fdd"
		},
	{ ATF_POINTER, 0, offsetof(struct ServedNRCell_Information__nrModeInfo, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TDD_InfoServedNRCell_Information,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdd"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_nrModeInfo_tag2el_7[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd */
};
static asn_CHOICE_specifics_t asn_SPC_nrModeInfo_specs_7 = {
	sizeof(struct ServedNRCell_Information__nrModeInfo),
	offsetof(struct ServedNRCell_Information__nrModeInfo, _asn_ctx),
	offsetof(struct ServedNRCell_Information__nrModeInfo, present),
	sizeof(((struct ServedNRCell_Information__nrModeInfo *)0)->present),
	asn_MAP_nrModeInfo_tag2el_7,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nrModeInfo_7 = {
	"nrModeInfo",
	"nrModeInfo",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_nrModeInfo_constr_7, &asn_PER_type_nrModeInfo_constr_7, CHOICE_constraint },
	asn_MBR_nrModeInfo_7,
	2,	/* Elements count */
	&asn_SPC_nrModeInfo_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ServedNRCell_Information_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ServedNRCell_Information, nrpCI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NRPCI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nrpCI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ServedNRCell_Information, nrCellID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NRCGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nrCellID"
		},
	{ ATF_POINTER, 2, offsetof(struct ServedNRCell_Information, fiveGS_TAC),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FiveGS_TAC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fiveGS-TAC"
		},
	{ ATF_POINTER, 1, offsetof(struct ServedNRCell_Information, configured_TAC),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TAC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"configured-TAC"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ServedNRCell_Information, broadcastPLMNs),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BroadcastPLMNs_Item,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"broadcastPLMNs"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ServedNRCell_Information, nrModeInfo),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_nrModeInfo_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nrModeInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ServedNRCell_Information, measurementTimingConfiguration),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measurementTimingConfiguration"
		},
	{ ATF_POINTER, 1, offsetof(struct ServedNRCell_Information, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_7683P92,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_ServedNRCell_Information_oms_1[] = { 2, 3, 7 };
static const ber_tlv_tag_t asn_DEF_ServedNRCell_Information_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ServedNRCell_Information_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nrpCI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nrCellID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* fiveGS-TAC */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* configured-TAC */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* broadcastPLMNs */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* nrModeInfo */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* measurementTimingConfiguration */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_ServedNRCell_Information_specs_1 = {
	sizeof(struct ServedNRCell_Information),
	offsetof(struct ServedNRCell_Information, _asn_ctx),
	asn_MAP_ServedNRCell_Information_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_ServedNRCell_Information_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	8,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ServedNRCell_Information = {
	"ServedNRCell-Information",
	"ServedNRCell-Information",
	&asn_OP_SEQUENCE,
	asn_DEF_ServedNRCell_Information_tags_1,
	sizeof(asn_DEF_ServedNRCell_Information_tags_1)
		/sizeof(asn_DEF_ServedNRCell_Information_tags_1[0]), /* 1 */
	asn_DEF_ServedNRCell_Information_tags_1,	/* Same as above */
	sizeof(asn_DEF_ServedNRCell_Information_tags_1)
		/sizeof(asn_DEF_ServedNRCell_Information_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ServedNRCell_Information_1,
	8,	/* Elements count */
	&asn_SPC_ServedNRCell_Information_specs_1	/* Additional specs */
};

