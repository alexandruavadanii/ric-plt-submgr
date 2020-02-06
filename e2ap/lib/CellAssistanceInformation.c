/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#include "CellAssistanceInformation.h"

#include "Limited-list.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_full_list_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_full_list_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_CellAssistanceInformation_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_CellAssistanceInformation_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_full_list_value2enum_3[] = {
	{ 0,	16,	"allServedNRcells" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_full_list_enum2value_3[] = {
	0	/* allServedNRcells(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_full_list_specs_3 = {
	asn_MAP_full_list_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_full_list_enum2value_3,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	2,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_full_list_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_full_list_3 = {
	"full-list",
	"full-list",
	&asn_OP_NativeEnumerated,
	asn_DEF_full_list_tags_3,
	sizeof(asn_DEF_full_list_tags_3)
		/sizeof(asn_DEF_full_list_tags_3[0]) - 1, /* 1 */
	asn_DEF_full_list_tags_3,	/* Same as above */
	sizeof(asn_DEF_full_list_tags_3)
		/sizeof(asn_DEF_full_list_tags_3[0]), /* 2 */
	{ &asn_OER_type_full_list_constr_3, &asn_PER_type_full_list_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_full_list_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_CellAssistanceInformation_1[] = {
	{ ATF_POINTER, 0, offsetof(struct CellAssistanceInformation, choice.limited_list),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Limited_list,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"limited-list"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellAssistanceInformation, choice.full_list),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_full_list_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"full-list"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_CellAssistanceInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* limited-list */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* full-list */
};
static asn_CHOICE_specifics_t asn_SPC_CellAssistanceInformation_specs_1 = {
	sizeof(struct CellAssistanceInformation),
	offsetof(struct CellAssistanceInformation, _asn_ctx),
	offsetof(struct CellAssistanceInformation, present),
	sizeof(((struct CellAssistanceInformation *)0)->present),
	asn_MAP_CellAssistanceInformation_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_CellAssistanceInformation = {
	"CellAssistanceInformation",
	"CellAssistanceInformation",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_CellAssistanceInformation_constr_1, &asn_PER_type_CellAssistanceInformation_constr_1, CHOICE_constraint },
	asn_MBR_CellAssistanceInformation_1,
	2,	/* Elements count */
	&asn_SPC_CellAssistanceInformation_specs_1	/* Additional specs */
};
