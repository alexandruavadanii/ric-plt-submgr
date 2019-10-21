/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#include "TunnelInformation.h"

#include "ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_TunnelInformation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct TunnelInformation, transportLayerAddress),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TransportLayerAddress,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"transportLayerAddress"
		},
	{ ATF_POINTER, 2, offsetof(struct TunnelInformation, uDP_Port_Number),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Port_Number,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uDP-Port-Number"
		},
	{ ATF_POINTER, 1, offsetof(struct TunnelInformation, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_7683P208,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_TunnelInformation_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_TunnelInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TunnelInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* transportLayerAddress */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* uDP-Port-Number */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_TunnelInformation_specs_1 = {
	sizeof(struct TunnelInformation),
	offsetof(struct TunnelInformation, _asn_ctx),
	asn_MAP_TunnelInformation_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_TunnelInformation_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_TunnelInformation = {
	"TunnelInformation",
	"TunnelInformation",
	&asn_OP_SEQUENCE,
	asn_DEF_TunnelInformation_tags_1,
	sizeof(asn_DEF_TunnelInformation_tags_1)
		/sizeof(asn_DEF_TunnelInformation_tags_1[0]), /* 1 */
	asn_DEF_TunnelInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_TunnelInformation_tags_1)
		/sizeof(asn_DEF_TunnelInformation_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_TunnelInformation_1,
	3,	/* Elements count */
	&asn_SPC_TunnelInformation_specs_1	/* Additional specs */
};

