/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#include "E-RABs-ToBeReleased-SgNBRelReqd-Item.h"

#include "ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_E_RABs_ToBeReleased_SgNBRelReqd_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E_RABs_ToBeReleased_SgNBRelReqd_Item, e_RAB_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_RAB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e-RAB-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E_RABs_ToBeReleased_SgNBRelReqd_Item, rlc_Mode_transferred),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RLCMode,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlc-Mode-transferred"
		},
	{ ATF_POINTER, 1, offsetof(struct E_RABs_ToBeReleased_SgNBRelReqd_Item, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_7683P82,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_E_RABs_ToBeReleased_SgNBRelReqd_Item_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_E_RABs_ToBeReleased_SgNBRelReqd_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E_RABs_ToBeReleased_SgNBRelReqd_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* e-RAB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rlc-Mode-transferred */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_E_RABs_ToBeReleased_SgNBRelReqd_Item_specs_1 = {
	sizeof(struct E_RABs_ToBeReleased_SgNBRelReqd_Item),
	offsetof(struct E_RABs_ToBeReleased_SgNBRelReqd_Item, _asn_ctx),
	asn_MAP_E_RABs_ToBeReleased_SgNBRelReqd_Item_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_E_RABs_ToBeReleased_SgNBRelReqd_Item_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E_RABs_ToBeReleased_SgNBRelReqd_Item = {
	"E-RABs-ToBeReleased-SgNBRelReqd-Item",
	"E-RABs-ToBeReleased-SgNBRelReqd-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_E_RABs_ToBeReleased_SgNBRelReqd_Item_tags_1,
	sizeof(asn_DEF_E_RABs_ToBeReleased_SgNBRelReqd_Item_tags_1)
		/sizeof(asn_DEF_E_RABs_ToBeReleased_SgNBRelReqd_Item_tags_1[0]), /* 1 */
	asn_DEF_E_RABs_ToBeReleased_SgNBRelReqd_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_E_RABs_ToBeReleased_SgNBRelReqd_Item_tags_1)
		/sizeof(asn_DEF_E_RABs_ToBeReleased_SgNBRelReqd_Item_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_E_RABs_ToBeReleased_SgNBRelReqd_Item_1,
	3,	/* Elements count */
	&asn_SPC_E_RABs_ToBeReleased_SgNBRelReqd_Item_specs_1	/* Additional specs */
};
