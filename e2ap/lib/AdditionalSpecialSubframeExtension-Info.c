/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#include "AdditionalSpecialSubframeExtension-Info.h"

#include "ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_AdditionalSpecialSubframeExtension_Info_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct AdditionalSpecialSubframeExtension_Info, additionalspecialSubframePatternsExtension),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AdditionalSpecialSubframePatternsExtension,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"additionalspecialSubframePatternsExtension"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AdditionalSpecialSubframeExtension_Info, cyclicPrefixDL),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CyclicPrefixDL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cyclicPrefixDL"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct AdditionalSpecialSubframeExtension_Info, cyclicPrefixUL),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CyclicPrefixUL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cyclicPrefixUL"
		},
	{ ATF_POINTER, 1, offsetof(struct AdditionalSpecialSubframeExtension_Info, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_7683P108,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_AdditionalSpecialSubframeExtension_Info_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_AdditionalSpecialSubframeExtension_Info_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AdditionalSpecialSubframeExtension_Info_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* additionalspecialSubframePatternsExtension */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cyclicPrefixDL */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cyclicPrefixUL */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_AdditionalSpecialSubframeExtension_Info_specs_1 = {
	sizeof(struct AdditionalSpecialSubframeExtension_Info),
	offsetof(struct AdditionalSpecialSubframeExtension_Info, _asn_ctx),
	asn_MAP_AdditionalSpecialSubframeExtension_Info_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_AdditionalSpecialSubframeExtension_Info_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_AdditionalSpecialSubframeExtension_Info = {
	"AdditionalSpecialSubframeExtension-Info",
	"AdditionalSpecialSubframeExtension-Info",
	&asn_OP_SEQUENCE,
	asn_DEF_AdditionalSpecialSubframeExtension_Info_tags_1,
	sizeof(asn_DEF_AdditionalSpecialSubframeExtension_Info_tags_1)
		/sizeof(asn_DEF_AdditionalSpecialSubframeExtension_Info_tags_1[0]), /* 1 */
	asn_DEF_AdditionalSpecialSubframeExtension_Info_tags_1,	/* Same as above */
	sizeof(asn_DEF_AdditionalSpecialSubframeExtension_Info_tags_1)
		/sizeof(asn_DEF_AdditionalSpecialSubframeExtension_Info_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_AdditionalSpecialSubframeExtension_Info_1,
	4,	/* Elements count */
	&asn_SPC_AdditionalSpecialSubframeExtension_Info_specs_1	/* Additional specs */
};

