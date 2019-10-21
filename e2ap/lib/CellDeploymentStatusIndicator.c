/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#include "CellDeploymentStatusIndicator.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_CellDeploymentStatusIndicator_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_CellDeploymentStatusIndicator_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_CellDeploymentStatusIndicator_value2enum_1[] = {
	{ 0,	23,	"pre-change-notification" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_CellDeploymentStatusIndicator_enum2value_1[] = {
	0	/* pre-change-notification(0) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_CellDeploymentStatusIndicator_specs_1 = {
	asn_MAP_CellDeploymentStatusIndicator_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_CellDeploymentStatusIndicator_enum2value_1,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	2,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_CellDeploymentStatusIndicator_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_CellDeploymentStatusIndicator = {
	"CellDeploymentStatusIndicator",
	"CellDeploymentStatusIndicator",
	&asn_OP_NativeEnumerated,
	asn_DEF_CellDeploymentStatusIndicator_tags_1,
	sizeof(asn_DEF_CellDeploymentStatusIndicator_tags_1)
		/sizeof(asn_DEF_CellDeploymentStatusIndicator_tags_1[0]), /* 1 */
	asn_DEF_CellDeploymentStatusIndicator_tags_1,	/* Same as above */
	sizeof(asn_DEF_CellDeploymentStatusIndicator_tags_1)
		/sizeof(asn_DEF_CellDeploymentStatusIndicator_tags_1[0]), /* 1 */
	{ &asn_OER_type_CellDeploymentStatusIndicator_constr_1, &asn_PER_type_CellDeploymentStatusIndicator_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_CellDeploymentStatusIndicator_specs_1	/* Additional specs */
};

