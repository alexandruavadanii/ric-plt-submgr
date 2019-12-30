/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "Spec/e2_and_x2-combined-and-minimized.asn1"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example`
 */

#include "Registration-Request.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_Registration_Request_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_Registration_Request_value2enum_1[] = {
	{ 0,	5,	"start" },
	{ 1,	4,	"stop" },
	{ 2,	12,	"partial-stop" },
	{ 3,	3,	"add" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_Registration_Request_enum2value_1[] = {
	3,	/* add(3) */
	2,	/* partial-stop(2) */
	0,	/* start(0) */
	1	/* stop(1) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_Registration_Request_specs_1 = {
	asn_MAP_Registration_Request_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_Registration_Request_enum2value_1,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	3,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_Registration_Request_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_Registration_Request = {
	"Registration-Request",
	"Registration-Request",
	&asn_OP_NativeEnumerated,
	asn_DEF_Registration_Request_tags_1,
	sizeof(asn_DEF_Registration_Request_tags_1)
		/sizeof(asn_DEF_Registration_Request_tags_1[0]), /* 1 */
	asn_DEF_Registration_Request_tags_1,	/* Same as above */
	sizeof(asn_DEF_Registration_Request_tags_1)
		/sizeof(asn_DEF_Registration_Request_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_Registration_Request_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_Registration_Request_specs_1	/* Additional specs */
};
