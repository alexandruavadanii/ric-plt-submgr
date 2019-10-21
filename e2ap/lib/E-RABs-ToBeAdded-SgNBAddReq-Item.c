/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#include "E-RABs-ToBeAdded-SgNBAddReq-Item.h"

#include "ProtocolExtensionContainer.h"
#include "E-RABs-ToBeAdded-SgNBAddReq-Item-SgNBPDCPpresent.h"
#include "E-RABs-ToBeAdded-SgNBAddReq-Item-SgNBPDCPnotpresent.h"
static asn_oer_constraints_t asn_OER_type_resource_configuration_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_resource_configuration_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_resource_configuration_5[] = {
	{ ATF_POINTER, 0, offsetof(struct E_RABs_ToBeAdded_SgNBAddReq_Item__resource_configuration, choice.sgNBPDCPpresent),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_RABs_ToBeAdded_SgNBAddReq_Item_SgNBPDCPpresent,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sgNBPDCPpresent"
		},
	{ ATF_POINTER, 0, offsetof(struct E_RABs_ToBeAdded_SgNBAddReq_Item__resource_configuration, choice.sgNBPDCPnotpresent),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_RABs_ToBeAdded_SgNBAddReq_Item_SgNBPDCPnotpresent,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sgNBPDCPnotpresent"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_resource_configuration_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sgNBPDCPpresent */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* sgNBPDCPnotpresent */
};
static asn_CHOICE_specifics_t asn_SPC_resource_configuration_specs_5 = {
	sizeof(struct E_RABs_ToBeAdded_SgNBAddReq_Item__resource_configuration),
	offsetof(struct E_RABs_ToBeAdded_SgNBAddReq_Item__resource_configuration, _asn_ctx),
	offsetof(struct E_RABs_ToBeAdded_SgNBAddReq_Item__resource_configuration, present),
	sizeof(((struct E_RABs_ToBeAdded_SgNBAddReq_Item__resource_configuration *)0)->present),
	asn_MAP_resource_configuration_tag2el_5,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_resource_configuration_5 = {
	"resource-configuration",
	"resource-configuration",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_resource_configuration_constr_5, &asn_PER_type_resource_configuration_constr_5, CHOICE_constraint },
	asn_MBR_resource_configuration_5,
	2,	/* Elements count */
	&asn_SPC_resource_configuration_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_E_RABs_ToBeAdded_SgNBAddReq_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E_RABs_ToBeAdded_SgNBAddReq_Item, e_RAB_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_RAB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e-RAB-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E_RABs_ToBeAdded_SgNBAddReq_Item, drb_ID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DRB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drb-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E_RABs_ToBeAdded_SgNBAddReq_Item, en_DC_ResourceConfiguration),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EN_DC_ResourceConfiguration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"en-DC-ResourceConfiguration"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E_RABs_ToBeAdded_SgNBAddReq_Item, resource_configuration),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_resource_configuration_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"resource-configuration"
		},
	{ ATF_POINTER, 1, offsetof(struct E_RABs_ToBeAdded_SgNBAddReq_Item, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_7683P44,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_E_RABs_ToBeAdded_SgNBAddReq_Item_oms_1[] = { 4 };
static const ber_tlv_tag_t asn_DEF_E_RABs_ToBeAdded_SgNBAddReq_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E_RABs_ToBeAdded_SgNBAddReq_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* e-RAB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* drb-ID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* en-DC-ResourceConfiguration */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* resource-configuration */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_E_RABs_ToBeAdded_SgNBAddReq_Item_specs_1 = {
	sizeof(struct E_RABs_ToBeAdded_SgNBAddReq_Item),
	offsetof(struct E_RABs_ToBeAdded_SgNBAddReq_Item, _asn_ctx),
	asn_MAP_E_RABs_ToBeAdded_SgNBAddReq_Item_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_E_RABs_ToBeAdded_SgNBAddReq_Item_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E_RABs_ToBeAdded_SgNBAddReq_Item = {
	"E-RABs-ToBeAdded-SgNBAddReq-Item",
	"E-RABs-ToBeAdded-SgNBAddReq-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_E_RABs_ToBeAdded_SgNBAddReq_Item_tags_1,
	sizeof(asn_DEF_E_RABs_ToBeAdded_SgNBAddReq_Item_tags_1)
		/sizeof(asn_DEF_E_RABs_ToBeAdded_SgNBAddReq_Item_tags_1[0]), /* 1 */
	asn_DEF_E_RABs_ToBeAdded_SgNBAddReq_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_E_RABs_ToBeAdded_SgNBAddReq_Item_tags_1)
		/sizeof(asn_DEF_E_RABs_ToBeAdded_SgNBAddReq_Item_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_E_RABs_ToBeAdded_SgNBAddReq_Item_1,
	5,	/* Elements count */
	&asn_SPC_E_RABs_ToBeAdded_SgNBAddReq_Item_specs_1	/* Additional specs */
};

