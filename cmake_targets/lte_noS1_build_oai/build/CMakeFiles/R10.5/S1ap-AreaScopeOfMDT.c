/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/thomas/lwa_ue_working/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#include "S1ap-AreaScopeOfMDT.h"

static asn_per_constraints_t asn_PER_type_S1ap_AreaScopeOfMDT_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_S1ap_AreaScopeOfMDT_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_AreaScopeOfMDT, choice.cellBased),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_CellBasedMDT,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cellBased"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_AreaScopeOfMDT, choice.tABased),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_TABasedMDT,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tABased"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_AreaScopeOfMDT, choice.pLMNWide),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pLMNWide"
		},
};
static asn_TYPE_tag2member_t asn_MAP_S1ap_AreaScopeOfMDT_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellBased at 67 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tABased at 68 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* pLMNWide at 69 */
};
static asn_CHOICE_specifics_t asn_SPC_S1ap_AreaScopeOfMDT_specs_1 = {
	sizeof(struct S1ap_AreaScopeOfMDT),
	offsetof(struct S1ap_AreaScopeOfMDT, _asn_ctx),
	offsetof(struct S1ap_AreaScopeOfMDT, present),
	sizeof(((struct S1ap_AreaScopeOfMDT *)0)->present),
	asn_MAP_S1ap_AreaScopeOfMDT_tag2el_1,
	3,	/* Count of tags in the map */
	0,
	3	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_S1ap_AreaScopeOfMDT = {
	"S1ap-AreaScopeOfMDT",
	"S1ap-AreaScopeOfMDT",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_decode_aper,
	CHOICE_encode_aper,
	CHOICE_compare,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_S1ap_AreaScopeOfMDT_constr_1,
	asn_MBR_S1ap_AreaScopeOfMDT_1,
	3,	/* Elements count */
	&asn_SPC_S1ap_AreaScopeOfMDT_specs_1	/* Additional specs */
};

