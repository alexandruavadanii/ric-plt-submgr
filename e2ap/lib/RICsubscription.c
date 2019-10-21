/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-PDU-Contents"
 * 	found in "e2ap-v031.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#include "RICsubscription.h"

static asn_TYPE_member_t asn_MBR_RICsubscription_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RICsubscription, ricEventTriggerDefinition),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RICeventTriggerDefinition,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ricEventTriggerDefinition"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RICsubscription, ricAction_ToBeSetup_List),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RICactions_ToBeSetup_List,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ricAction-ToBeSetup-List"
		},
};
static const ber_tlv_tag_t asn_DEF_RICsubscription_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RICsubscription_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ricEventTriggerDefinition */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ricAction-ToBeSetup-List */
};
static asn_SEQUENCE_specifics_t asn_SPC_RICsubscription_specs_1 = {
	sizeof(struct RICsubscription),
	offsetof(struct RICsubscription, _asn_ctx),
	asn_MAP_RICsubscription_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RICsubscription = {
	"RICsubscription",
	"RICsubscription",
	&asn_OP_SEQUENCE,
	asn_DEF_RICsubscription_tags_1,
	sizeof(asn_DEF_RICsubscription_tags_1)
		/sizeof(asn_DEF_RICsubscription_tags_1[0]), /* 1 */
	asn_DEF_RICsubscription_tags_1,	/* Same as above */
	sizeof(asn_DEF_RICsubscription_tags_1)
		/sizeof(asn_DEF_RICsubscription_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RICsubscription_1,
	2,	/* Elements count */
	&asn_SPC_RICsubscription_specs_1	/* Additional specs */
};

