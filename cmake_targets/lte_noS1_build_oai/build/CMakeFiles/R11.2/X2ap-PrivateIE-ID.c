/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-CommonDataTypes"
 * 	found in "/home/mukesh/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-CommonDataTypes.asn"
 * 	`asn1c -gen-PER`
 */

#include "X2ap-PrivateIE-ID.h"

static int
memb_local_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 65535)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_local_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16,  0,  65535 }	/* (0..65535) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_X2ap_PrivateIE_ID_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_X2ap_PrivateIE_ID_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2ap_PrivateIE_ID, choice.local),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_local_constraint_1,
		&asn_PER_memb_local_constr_2,
		0,
		"local"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2ap_PrivateIE_ID, choice.global),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OBJECT_IDENTIFIER,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"global"
		},
};
static asn_TYPE_tag2member_t asn_MAP_X2ap_PrivateIE_ID_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* local at 30 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* global at 31 */
};
static asn_CHOICE_specifics_t asn_SPC_X2ap_PrivateIE_ID_specs_1 = {
	sizeof(struct X2ap_PrivateIE_ID),
	offsetof(struct X2ap_PrivateIE_ID, _asn_ctx),
	offsetof(struct X2ap_PrivateIE_ID, present),
	sizeof(((struct X2ap_PrivateIE_ID *)0)->present),
	asn_MAP_X2ap_PrivateIE_ID_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_X2ap_PrivateIE_ID = {
	"X2ap-PrivateIE-ID",
	"X2ap-PrivateIE-ID",
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
	&asn_PER_type_X2ap_PrivateIE_ID_constr_1,
	asn_MBR_X2ap_PrivateIE_ID_1,
	2,	/* Elements count */
	&asn_SPC_X2ap_PrivateIE_ID_specs_1	/* Additional specs */
};

