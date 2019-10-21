/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#include "SplitSRB.h"

#include "DeliveryStatus.h"
#include "ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_SplitSRB_1[] = {
	{ ATF_POINTER, 1, offsetof(struct SplitSRB, rrcContainer),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRCContainer,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rrcContainer"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SplitSRB, srbType),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SRBType,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"srbType"
		},
	{ ATF_POINTER, 2, offsetof(struct SplitSRB, deliveryStatus),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DeliveryStatus,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"deliveryStatus"
		},
	{ ATF_POINTER, 1, offsetof(struct SplitSRB, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_7683P170,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_SplitSRB_oms_1[] = { 0, 2, 3 };
static const ber_tlv_tag_t asn_DEF_SplitSRB_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SplitSRB_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrcContainer */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* srbType */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* deliveryStatus */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_SplitSRB_specs_1 = {
	sizeof(struct SplitSRB),
	offsetof(struct SplitSRB, _asn_ctx),
	asn_MAP_SplitSRB_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_SplitSRB_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SplitSRB = {
	"SplitSRB",
	"SplitSRB",
	&asn_OP_SEQUENCE,
	asn_DEF_SplitSRB_tags_1,
	sizeof(asn_DEF_SplitSRB_tags_1)
		/sizeof(asn_DEF_SplitSRB_tags_1[0]), /* 1 */
	asn_DEF_SplitSRB_tags_1,	/* Same as above */
	sizeof(asn_DEF_SplitSRB_tags_1)
		/sizeof(asn_DEF_SplitSRB_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SplitSRB_1,
	4,	/* Elements count */
	&asn_SPC_SplitSRB_specs_1	/* Additional specs */
};

