/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/mukesh/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#include "S1ap-Bearers-SubjectToStatusTransfer-Item.h"

static asn_TYPE_member_t asn_MBR_S1ap_Bearers_SubjectToStatusTransfer_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_Bearers_SubjectToStatusTransfer_Item, e_RAB_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_E_RAB_ID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"e-RAB-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_Bearers_SubjectToStatusTransfer_Item, uL_COUNTvalue),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_COUNTvalue,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"uL-COUNTvalue"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_Bearers_SubjectToStatusTransfer_Item, dL_COUNTvalue),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_COUNTvalue,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dL-COUNTvalue"
		},
	{ ATF_POINTER, 2, offsetof(struct S1ap_Bearers_SubjectToStatusTransfer_Item, receiveStatusofULPDCPSDUs),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_ReceiveStatusofULPDCPSDUs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"receiveStatusofULPDCPSDUs"
		},
	{ ATF_POINTER, 1, offsetof(struct S1ap_Bearers_SubjectToStatusTransfer_Item, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_IE_Extensions,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"iE-Extensions"
		},
};
static int asn_MAP_S1ap_Bearers_SubjectToStatusTransfer_Item_oms_1[] = { 3, 4 };
static ber_tlv_tag_t asn_DEF_S1ap_Bearers_SubjectToStatusTransfer_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_S1ap_Bearers_SubjectToStatusTransfer_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* e-RAB-ID at 86 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* uL-COUNTvalue at 87 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* dL-COUNTvalue at 88 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* receiveStatusofULPDCPSDUs at 89 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* iE-Extensions at 90 */
};
static asn_SEQUENCE_specifics_t asn_SPC_S1ap_Bearers_SubjectToStatusTransfer_Item_specs_1 = {
	sizeof(struct S1ap_Bearers_SubjectToStatusTransfer_Item),
	offsetof(struct S1ap_Bearers_SubjectToStatusTransfer_Item, _asn_ctx),
	asn_MAP_S1ap_Bearers_SubjectToStatusTransfer_Item_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_S1ap_Bearers_SubjectToStatusTransfer_Item_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	4,	/* Start extensions */
	6	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_S1ap_Bearers_SubjectToStatusTransfer_Item = {
	"S1ap-Bearers-SubjectToStatusTransfer-Item",
	"S1ap-Bearers-SubjectToStatusTransfer-Item",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	SEQUENCE_decode_aper,
	SEQUENCE_encode_aper,
	SEQUENCE_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_S1ap_Bearers_SubjectToStatusTransfer_Item_tags_1,
	sizeof(asn_DEF_S1ap_Bearers_SubjectToStatusTransfer_Item_tags_1)
		/sizeof(asn_DEF_S1ap_Bearers_SubjectToStatusTransfer_Item_tags_1[0]), /* 1 */
	asn_DEF_S1ap_Bearers_SubjectToStatusTransfer_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1ap_Bearers_SubjectToStatusTransfer_Item_tags_1)
		/sizeof(asn_DEF_S1ap_Bearers_SubjectToStatusTransfer_Item_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_S1ap_Bearers_SubjectToStatusTransfer_Item_1,
	5,	/* Elements count */
	&asn_SPC_S1ap_Bearers_SubjectToStatusTransfer_Item_specs_1	/* Additional specs */
};

