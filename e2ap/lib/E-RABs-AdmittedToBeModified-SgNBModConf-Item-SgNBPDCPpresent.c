/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#include "E-RABs-AdmittedToBeModified-SgNBModConf-Item-SgNBPDCPpresent.h"

#include "ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_E_RABs_AdmittedToBeModified_SgNBModConf_Item_SgNBPDCPpresent_1[] = {
	{ ATF_POINTER, 1, offsetof(struct E_RABs_AdmittedToBeModified_SgNBModConf_Item_SgNBPDCPpresent, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_7683P76,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_E_RABs_AdmittedToBeModified_SgNBModConf_Item_SgNBPDCPpresent_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_E_RABs_AdmittedToBeModified_SgNBModConf_Item_SgNBPDCPpresent_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E_RABs_AdmittedToBeModified_SgNBModConf_Item_SgNBPDCPpresent_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_E_RABs_AdmittedToBeModified_SgNBModConf_Item_SgNBPDCPpresent_specs_1 = {
	sizeof(struct E_RABs_AdmittedToBeModified_SgNBModConf_Item_SgNBPDCPpresent),
	offsetof(struct E_RABs_AdmittedToBeModified_SgNBModConf_Item_SgNBPDCPpresent, _asn_ctx),
	asn_MAP_E_RABs_AdmittedToBeModified_SgNBModConf_Item_SgNBPDCPpresent_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_E_RABs_AdmittedToBeModified_SgNBModConf_Item_SgNBPDCPpresent_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E_RABs_AdmittedToBeModified_SgNBModConf_Item_SgNBPDCPpresent = {
	"E-RABs-AdmittedToBeModified-SgNBModConf-Item-SgNBPDCPpresent",
	"E-RABs-AdmittedToBeModified-SgNBModConf-Item-SgNBPDCPpresent",
	&asn_OP_SEQUENCE,
	asn_DEF_E_RABs_AdmittedToBeModified_SgNBModConf_Item_SgNBPDCPpresent_tags_1,
	sizeof(asn_DEF_E_RABs_AdmittedToBeModified_SgNBModConf_Item_SgNBPDCPpresent_tags_1)
		/sizeof(asn_DEF_E_RABs_AdmittedToBeModified_SgNBModConf_Item_SgNBPDCPpresent_tags_1[0]), /* 1 */
	asn_DEF_E_RABs_AdmittedToBeModified_SgNBModConf_Item_SgNBPDCPpresent_tags_1,	/* Same as above */
	sizeof(asn_DEF_E_RABs_AdmittedToBeModified_SgNBModConf_Item_SgNBPDCPpresent_tags_1)
		/sizeof(asn_DEF_E_RABs_AdmittedToBeModified_SgNBModConf_Item_SgNBPDCPpresent_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_E_RABs_AdmittedToBeModified_SgNBModConf_Item_SgNBPDCPpresent_1,
	1,	/* Elements count */
	&asn_SPC_E_RABs_AdmittedToBeModified_SgNBModConf_Item_SgNBPDCPpresent_specs_1	/* Additional specs */
};

