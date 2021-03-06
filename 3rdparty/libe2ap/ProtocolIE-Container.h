/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-Containers"
 * 	found in "Spec/e2_and_x2-combined-and-minimized.asn1"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example`
 */

#ifndef	_ProtocolIE_Container_H_
#define	_ProtocolIE_Container_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RICsubscriptionRequest_IEs;
struct RICsubscriptionResponse_IEs;
struct RICsubscriptionFailure_IEs;
struct RICsubscriptionDeleteRequest_IEs;
struct RICsubscriptionDeleteResponse_IEs;
struct RICsubscriptionDeleteFailure_IEs;
struct RICindication_IEs;
struct RICcontrolRequest_IEs;
struct RICcontrolAcknowledge_IEs;
struct RICcontrolFailure_IEs;
struct RICserviceUpdate_IEs;
struct RICserviceUpdateAcknowledge_IEs;
struct RICserviceUpdateFailure_IEs;
struct RICserviceQuery_IEs;
struct ErrorIndication_IEs;
struct ResetRequest_IEs;
struct ResetResponse_IEs;
struct X2SetupRequest_IEs;
struct X2SetupResponse_IEs;
struct X2SetupFailure_IEs;
struct LoadInformation_IEs;
struct ENBConfigurationUpdate_IEs;
struct ENBConfigurationUpdateAcknowledge_IEs;
struct ENBConfigurationUpdateFailure_IEs;
struct ResourceStatusRequest_IEs;
struct ResourceStatusResponse_IEs;
struct ResourceStatusFailure_IEs;
struct ResourceStatusUpdate_IEs;
struct SeNBReconfigurationComplete_IEs;
struct ENDCX2SetupRequest_IEs;
struct ENB_ENDCX2SetupReqIEs;
struct En_gNB_ENDCX2SetupReqIEs;
struct ENDCX2SetupResponse_IEs;
struct ENB_ENDCX2SetupReqAckIEs;
struct En_gNB_ENDCX2SetupReqAckIEs;
struct ENDCX2SetupFailure_IEs;
struct ENDCConfigurationUpdate_IEs;
struct ENB_ENDCConfigUpdateIEs;
struct En_gNB_ENDCConfigUpdateIEs;
struct ENDCConfigurationUpdateAcknowledge_IEs;
struct ENB_ENDCConfigUpdateAckIEs;
struct En_gNB_ENDCConfigUpdateAckIEs;
struct ENDCConfigurationUpdateFailure_IEs;
struct GNBStatusIndicationIEs;

/* ProtocolIE-Container */
typedef struct ProtocolIE_Container_8807P0 {
	A_SEQUENCE_OF(struct RICsubscriptionRequest_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P0_t;
typedef struct ProtocolIE_Container_8807P1 {
	A_SEQUENCE_OF(struct RICsubscriptionResponse_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P1_t;
typedef struct ProtocolIE_Container_8807P2 {
	A_SEQUENCE_OF(struct RICsubscriptionFailure_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P2_t;
typedef struct ProtocolIE_Container_8807P3 {
	A_SEQUENCE_OF(struct RICsubscriptionDeleteRequest_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P3_t;
typedef struct ProtocolIE_Container_8807P4 {
	A_SEQUENCE_OF(struct RICsubscriptionDeleteResponse_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P4_t;
typedef struct ProtocolIE_Container_8807P5 {
	A_SEQUENCE_OF(struct RICsubscriptionDeleteFailure_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P5_t;
typedef struct ProtocolIE_Container_8807P6 {
	A_SEQUENCE_OF(struct RICindication_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P6_t;
typedef struct ProtocolIE_Container_8807P7 {
	A_SEQUENCE_OF(struct RICcontrolRequest_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P7_t;
typedef struct ProtocolIE_Container_8807P8 {
	A_SEQUENCE_OF(struct RICcontrolAcknowledge_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P8_t;
typedef struct ProtocolIE_Container_8807P9 {
	A_SEQUENCE_OF(struct RICcontrolFailure_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P9_t;
typedef struct ProtocolIE_Container_8807P10 {
	A_SEQUENCE_OF(struct RICserviceUpdate_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P10_t;
typedef struct ProtocolIE_Container_8807P11 {
	A_SEQUENCE_OF(struct RICserviceUpdateAcknowledge_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P11_t;
typedef struct ProtocolIE_Container_8807P12 {
	A_SEQUENCE_OF(struct RICserviceUpdateFailure_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P12_t;
typedef struct ProtocolIE_Container_8807P13 {
	A_SEQUENCE_OF(struct RICserviceQuery_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P13_t;
typedef struct ProtocolIE_Container_8807P14 {
	A_SEQUENCE_OF(struct ErrorIndication_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P14_t;
typedef struct ProtocolIE_Container_8807P15 {
	A_SEQUENCE_OF(struct ResetRequest_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P15_t;
typedef struct ProtocolIE_Container_8807P16 {
	A_SEQUENCE_OF(struct ResetResponse_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P16_t;
typedef struct ProtocolIE_Container_8807P17 {
	A_SEQUENCE_OF(struct X2SetupRequest_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P17_t;
typedef struct ProtocolIE_Container_8807P18 {
	A_SEQUENCE_OF(struct X2SetupResponse_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P18_t;
typedef struct ProtocolIE_Container_8807P19 {
	A_SEQUENCE_OF(struct X2SetupFailure_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P19_t;
typedef struct ProtocolIE_Container_8807P20 {
	A_SEQUENCE_OF(struct LoadInformation_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P20_t;
typedef struct ProtocolIE_Container_8807P21 {
	A_SEQUENCE_OF(struct ENBConfigurationUpdate_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P21_t;
typedef struct ProtocolIE_Container_8807P22 {
	A_SEQUENCE_OF(struct ENBConfigurationUpdateAcknowledge_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P22_t;
typedef struct ProtocolIE_Container_8807P23 {
	A_SEQUENCE_OF(struct ENBConfigurationUpdateFailure_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P23_t;
typedef struct ProtocolIE_Container_8807P24 {
	A_SEQUENCE_OF(struct ResourceStatusRequest_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P24_t;
typedef struct ProtocolIE_Container_8807P25 {
	A_SEQUENCE_OF(struct ResourceStatusResponse_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P25_t;
typedef struct ProtocolIE_Container_8807P26 {
	A_SEQUENCE_OF(struct ResourceStatusFailure_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P26_t;
typedef struct ProtocolIE_Container_8807P27 {
	A_SEQUENCE_OF(struct ResourceStatusUpdate_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P27_t;
typedef struct ProtocolIE_Container_8807P28 {
	A_SEQUENCE_OF(struct SeNBReconfigurationComplete_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P28_t;
typedef struct ProtocolIE_Container_8807P29 {
	A_SEQUENCE_OF(struct ENDCX2SetupRequest_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P29_t;
typedef struct ProtocolIE_Container_8807P30 {
	A_SEQUENCE_OF(struct ENB_ENDCX2SetupReqIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P30_t;
typedef struct ProtocolIE_Container_8807P31 {
	A_SEQUENCE_OF(struct En_gNB_ENDCX2SetupReqIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P31_t;
typedef struct ProtocolIE_Container_8807P32 {
	A_SEQUENCE_OF(struct ENDCX2SetupResponse_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P32_t;
typedef struct ProtocolIE_Container_8807P33 {
	A_SEQUENCE_OF(struct ENB_ENDCX2SetupReqAckIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P33_t;
typedef struct ProtocolIE_Container_8807P34 {
	A_SEQUENCE_OF(struct En_gNB_ENDCX2SetupReqAckIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P34_t;
typedef struct ProtocolIE_Container_8807P35 {
	A_SEQUENCE_OF(struct ENDCX2SetupFailure_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P35_t;
typedef struct ProtocolIE_Container_8807P36 {
	A_SEQUENCE_OF(struct ENDCConfigurationUpdate_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P36_t;
typedef struct ProtocolIE_Container_8807P37 {
	A_SEQUENCE_OF(struct ENB_ENDCConfigUpdateIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P37_t;
typedef struct ProtocolIE_Container_8807P38 {
	A_SEQUENCE_OF(struct En_gNB_ENDCConfigUpdateIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P38_t;
typedef struct ProtocolIE_Container_8807P39 {
	A_SEQUENCE_OF(struct ENDCConfigurationUpdateAcknowledge_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P39_t;
typedef struct ProtocolIE_Container_8807P40 {
	A_SEQUENCE_OF(struct ENB_ENDCConfigUpdateAckIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P40_t;
typedef struct ProtocolIE_Container_8807P41 {
	A_SEQUENCE_OF(struct En_gNB_ENDCConfigUpdateAckIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P41_t;
typedef struct ProtocolIE_Container_8807P42 {
	A_SEQUENCE_OF(struct ENDCConfigurationUpdateFailure_IEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P42_t;
typedef struct ProtocolIE_Container_8807P43 {
	A_SEQUENCE_OF(struct GNBStatusIndicationIEs) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtocolIE_Container_8807P43_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P0;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P0_specs_1;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P0_1[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P0_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P1;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P1_specs_3;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P1_3[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P1_constr_3;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P2;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P2_specs_5;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P2_5[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P2_constr_5;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P3;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P3_specs_7;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P3_7[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P3_constr_7;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P4;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P4_specs_9;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P4_9[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P4_constr_9;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P5;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P5_specs_11;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P5_11[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P5_constr_11;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P6;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P6_specs_13;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P6_13[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P6_constr_13;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P7;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P7_specs_15;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P7_15[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P7_constr_15;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P8;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P8_specs_17;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P8_17[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P8_constr_17;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P9;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P9_specs_19;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P9_19[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P9_constr_19;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P10;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P10_specs_21;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P10_21[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P10_constr_21;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P11;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P11_specs_23;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P11_23[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P11_constr_23;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P12;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P12_specs_25;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P12_25[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P12_constr_25;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P13;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P13_specs_27;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P13_27[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P13_constr_27;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P14;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P14_specs_29;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P14_29[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P14_constr_29;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P15;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P15_specs_31;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P15_31[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P15_constr_31;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P16;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P16_specs_33;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P16_33[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P16_constr_33;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P17;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P17_specs_35;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P17_35[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P17_constr_35;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P18;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P18_specs_37;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P18_37[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P18_constr_37;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P19;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P19_specs_39;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P19_39[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P19_constr_39;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P20;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P20_specs_41;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P20_41[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P20_constr_41;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P21;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P21_specs_43;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P21_43[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P21_constr_43;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P22;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P22_specs_45;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P22_45[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P22_constr_45;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P23;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P23_specs_47;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P23_47[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P23_constr_47;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P24;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P24_specs_49;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P24_49[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P24_constr_49;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P25;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P25_specs_51;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P25_51[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P25_constr_51;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P26;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P26_specs_53;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P26_53[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P26_constr_53;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P27;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P27_specs_55;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P27_55[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P27_constr_55;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P28;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P28_specs_57;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P28_57[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P28_constr_57;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P29;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P29_specs_59;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P29_59[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P29_constr_59;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P30;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P30_specs_61;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P30_61[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P30_constr_61;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P31;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P31_specs_63;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P31_63[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P31_constr_63;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P32;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P32_specs_65;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P32_65[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P32_constr_65;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P33;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P33_specs_67;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P33_67[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P33_constr_67;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P34;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P34_specs_69;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P34_69[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P34_constr_69;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P35;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P35_specs_71;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P35_71[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P35_constr_71;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P36;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P36_specs_73;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P36_73[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P36_constr_73;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P37;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P37_specs_75;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P37_75[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P37_constr_75;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P38;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P38_specs_77;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P38_77[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P38_constr_77;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P39;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P39_specs_79;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P39_79[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P39_constr_79;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P40;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P40_specs_81;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P40_81[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P40_constr_81;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P41;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P41_specs_83;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P41_83[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P41_constr_83;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P42;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P42_specs_85;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P42_85[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P42_constr_85;
extern asn_TYPE_descriptor_t asn_DEF_ProtocolIE_Container_8807P43;
extern asn_SET_OF_specifics_t asn_SPC_ProtocolIE_Container_8807P43_specs_87;
extern asn_TYPE_member_t asn_MBR_ProtocolIE_Container_8807P43_87[1];
extern asn_per_constraints_t asn_PER_type_ProtocolIE_Container_8807P43_constr_87;

#ifdef __cplusplus
}
#endif

#endif	/* _ProtocolIE_Container_H_ */
#include "asn_internal.h"
