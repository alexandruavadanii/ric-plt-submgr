/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#include "TDD-InfoServedNRCell-Information.h"

#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_TDD_InfoServedNRCell_Information_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TDD_InfoServedNRCell_Information, nRFreqInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NRFreqInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nRFreqInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TDD_InfoServedNRCell_Information, nR_TxBW),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_TxBW,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nR-TxBW"
		},
	{ ATF_POINTER, 1, offsetof(struct TDD_InfoServedNRCell_Information, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_7683P95,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_TDD_InfoServedNRCell_Information_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_TDD_InfoServedNRCell_Information_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TDD_InfoServedNRCell_Information_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nRFreqInfo */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nR-TxBW */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_TDD_InfoServedNRCell_Information_specs_1 = {
	sizeof(struct TDD_InfoServedNRCell_Information),
	offsetof(struct TDD_InfoServedNRCell_Information, _asn_ctx),
	asn_MAP_TDD_InfoServedNRCell_Information_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_TDD_InfoServedNRCell_Information_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TDD_InfoServedNRCell_Information = {
	"TDD-InfoServedNRCell-Information",
	"TDD-InfoServedNRCell-Information",
	&asn_OP_SEQUENCE,
	asn_DEF_TDD_InfoServedNRCell_Information_tags_1,
	sizeof(asn_DEF_TDD_InfoServedNRCell_Information_tags_1)
		/sizeof(asn_DEF_TDD_InfoServedNRCell_Information_tags_1[0]), /* 1 */
	asn_DEF_TDD_InfoServedNRCell_Information_tags_1,	/* Same as above */
	sizeof(asn_DEF_TDD_InfoServedNRCell_Information_tags_1)
		/sizeof(asn_DEF_TDD_InfoServedNRCell_Information_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_TDD_InfoServedNRCell_Information_1,
	3,	/* Elements count */
	&asn_SPC_TDD_InfoServedNRCell_Information_specs_1	/* Additional specs */
};

