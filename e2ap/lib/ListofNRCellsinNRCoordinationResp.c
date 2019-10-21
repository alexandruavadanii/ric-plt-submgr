/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#include "ListofNRCellsinNRCoordinationResp.h"

#include "NRCGI.h"
static asn_oer_constraints_t asn_OER_type_ListofNRCellsinNRCoordinationResp_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..64)) */};
static asn_per_constraints_t asn_PER_type_ListofNRCellsinNRCoordinationResp_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 7,  7,  0,  64 }	/* (SIZE(0..64)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ListofNRCellsinNRCoordinationResp_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NRCGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_ListofNRCellsinNRCoordinationResp_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_ListofNRCellsinNRCoordinationResp_specs_1 = {
	sizeof(struct ListofNRCellsinNRCoordinationResp),
	offsetof(struct ListofNRCellsinNRCoordinationResp, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_ListofNRCellsinNRCoordinationResp = {
	"ListofNRCellsinNRCoordinationResp",
	"ListofNRCellsinNRCoordinationResp",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_ListofNRCellsinNRCoordinationResp_tags_1,
	sizeof(asn_DEF_ListofNRCellsinNRCoordinationResp_tags_1)
		/sizeof(asn_DEF_ListofNRCellsinNRCoordinationResp_tags_1[0]), /* 1 */
	asn_DEF_ListofNRCellsinNRCoordinationResp_tags_1,	/* Same as above */
	sizeof(asn_DEF_ListofNRCellsinNRCoordinationResp_tags_1)
		/sizeof(asn_DEF_ListofNRCellsinNRCoordinationResp_tags_1[0]), /* 1 */
	{ &asn_OER_type_ListofNRCellsinNRCoordinationResp_constr_1, &asn_PER_type_ListofNRCellsinNRCoordinationResp_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_ListofNRCellsinNRCoordinationResp_1,
	1,	/* Single element */
	&asn_SPC_ListofNRCellsinNRCoordinationResp_specs_1	/* Additional specs */
};

