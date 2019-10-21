/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#include "UESidelinkAggregateMaximumBitRate.h"

#include "ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_UESidelinkAggregateMaximumBitRate_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UESidelinkAggregateMaximumBitRate, uESidelinkAggregateMaximumBitRate),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BitRate,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uESidelinkAggregateMaximumBitRate"
		},
	{ ATF_POINTER, 1, offsetof(struct UESidelinkAggregateMaximumBitRate, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_7683P212,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_UESidelinkAggregateMaximumBitRate_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_UESidelinkAggregateMaximumBitRate_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UESidelinkAggregateMaximumBitRate_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* uESidelinkAggregateMaximumBitRate */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_UESidelinkAggregateMaximumBitRate_specs_1 = {
	sizeof(struct UESidelinkAggregateMaximumBitRate),
	offsetof(struct UESidelinkAggregateMaximumBitRate, _asn_ctx),
	asn_MAP_UESidelinkAggregateMaximumBitRate_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_UESidelinkAggregateMaximumBitRate_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UESidelinkAggregateMaximumBitRate = {
	"UESidelinkAggregateMaximumBitRate",
	"UESidelinkAggregateMaximumBitRate",
	&asn_OP_SEQUENCE,
	asn_DEF_UESidelinkAggregateMaximumBitRate_tags_1,
	sizeof(asn_DEF_UESidelinkAggregateMaximumBitRate_tags_1)
		/sizeof(asn_DEF_UESidelinkAggregateMaximumBitRate_tags_1[0]), /* 1 */
	asn_DEF_UESidelinkAggregateMaximumBitRate_tags_1,	/* Same as above */
	sizeof(asn_DEF_UESidelinkAggregateMaximumBitRate_tags_1)
		/sizeof(asn_DEF_UESidelinkAggregateMaximumBitRate_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UESidelinkAggregateMaximumBitRate_1,
	2,	/* Elements count */
	&asn_SPC_UESidelinkAggregateMaximumBitRate_specs_1	/* Additional specs */
};

