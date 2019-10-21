/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#include "V2XServicesAuthorized.h"

#include "ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_V2XServicesAuthorized_1[] = {
	{ ATF_POINTER, 3, offsetof(struct V2XServicesAuthorized, vehicleUE),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VehicleUE,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"vehicleUE"
		},
	{ ATF_POINTER, 2, offsetof(struct V2XServicesAuthorized, pedestrianUE),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PedestrianUE,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pedestrianUE"
		},
	{ ATF_POINTER, 1, offsetof(struct V2XServicesAuthorized, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_7683P220,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_V2XServicesAuthorized_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_V2XServicesAuthorized_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_V2XServicesAuthorized_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* vehicleUE */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pedestrianUE */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_V2XServicesAuthorized_specs_1 = {
	sizeof(struct V2XServicesAuthorized),
	offsetof(struct V2XServicesAuthorized, _asn_ctx),
	asn_MAP_V2XServicesAuthorized_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_V2XServicesAuthorized_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_V2XServicesAuthorized = {
	"V2XServicesAuthorized",
	"V2XServicesAuthorized",
	&asn_OP_SEQUENCE,
	asn_DEF_V2XServicesAuthorized_tags_1,
	sizeof(asn_DEF_V2XServicesAuthorized_tags_1)
		/sizeof(asn_DEF_V2XServicesAuthorized_tags_1[0]), /* 1 */
	asn_DEF_V2XServicesAuthorized_tags_1,	/* Same as above */
	sizeof(asn_DEF_V2XServicesAuthorized_tags_1)
		/sizeof(asn_DEF_V2XServicesAuthorized_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_V2XServicesAuthorized_1,
	3,	/* Elements count */
	&asn_SPC_V2XServicesAuthorized_specs_1	/* Additional specs */
};

