/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "X2AP-15-4-0.asn1"
 * 	`asn1c -D ./asn1_n1 -pdu=auto -fno-include-deps -fcompound-names -findirect-choice -gen-PER -gen-OER -no-gen-example`
 */

#include "EnhancedRNTPStartTime.h"

#include "ProtocolExtensionContainer.h"
static int
memb_startSFN_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1023)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_startSubframeNumber_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 9)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_startSFN_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_memb_startSFN_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  10,  10,  0,  1023 }	/* (0..1023,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_startSubframeNumber_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_memb_startSubframeNumber_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  4,  4,  0,  9 }	/* (0..9,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_EnhancedRNTPStartTime_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EnhancedRNTPStartTime, startSFN),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_startSFN_constr_2, &asn_PER_memb_startSFN_constr_2,  memb_startSFN_constraint_1 },
		0, 0, /* No default value */
		"startSFN"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EnhancedRNTPStartTime, startSubframeNumber),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_startSubframeNumber_constr_3, &asn_PER_memb_startSubframeNumber_constr_3,  memb_startSubframeNumber_constraint_1 },
		0, 0, /* No default value */
		"startSubframeNumber"
		},
	{ ATF_POINTER, 1, offsetof(struct EnhancedRNTPStartTime, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_7683P136,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_EnhancedRNTPStartTime_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_EnhancedRNTPStartTime_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_EnhancedRNTPStartTime_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* startSFN */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* startSubframeNumber */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_EnhancedRNTPStartTime_specs_1 = {
	sizeof(struct EnhancedRNTPStartTime),
	offsetof(struct EnhancedRNTPStartTime, _asn_ctx),
	asn_MAP_EnhancedRNTPStartTime_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_EnhancedRNTPStartTime_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_EnhancedRNTPStartTime = {
	"EnhancedRNTPStartTime",
	"EnhancedRNTPStartTime",
	&asn_OP_SEQUENCE,
	asn_DEF_EnhancedRNTPStartTime_tags_1,
	sizeof(asn_DEF_EnhancedRNTPStartTime_tags_1)
		/sizeof(asn_DEF_EnhancedRNTPStartTime_tags_1[0]), /* 1 */
	asn_DEF_EnhancedRNTPStartTime_tags_1,	/* Same as above */
	sizeof(asn_DEF_EnhancedRNTPStartTime_tags_1)
		/sizeof(asn_DEF_EnhancedRNTPStartTime_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_EnhancedRNTPStartTime_1,
	3,	/* Elements count */
	&asn_SPC_EnhancedRNTPStartTime_specs_1	/* Additional specs */
};

