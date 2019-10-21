/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#include "ReplacingCellsList-Item.h"

asn_TYPE_member_t asn_MBR_ReplacingCellsList_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ReplacingCellsList_Item, eCGI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ECGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eCGI"
		},
};
static const ber_tlv_tag_t asn_DEF_ReplacingCellsList_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ReplacingCellsList_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* eCGI */
};
asn_SEQUENCE_specifics_t asn_SPC_ReplacingCellsList_Item_specs_1 = {
	sizeof(struct ReplacingCellsList_Item),
	offsetof(struct ReplacingCellsList_Item, _asn_ctx),
	asn_MAP_ReplacingCellsList_Item_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ReplacingCellsList_Item = {
	"ReplacingCellsList-Item",
	"ReplacingCellsList-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_ReplacingCellsList_Item_tags_1,
	sizeof(asn_DEF_ReplacingCellsList_Item_tags_1)
		/sizeof(asn_DEF_ReplacingCellsList_Item_tags_1[0]), /* 1 */
	asn_DEF_ReplacingCellsList_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_ReplacingCellsList_Item_tags_1)
		/sizeof(asn_DEF_ReplacingCellsList_Item_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ReplacingCellsList_Item_1,
	1,	/* Elements count */
	&asn_SPC_ReplacingCellsList_Item_specs_1	/* Additional specs */
};

