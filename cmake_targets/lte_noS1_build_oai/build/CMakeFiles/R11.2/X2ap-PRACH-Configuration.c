/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/thomas/lwa_ue_working/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#include "X2ap-PRACH-Configuration.h"

static int
memb_rootSequenceIndex_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 837)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_zeroCorrelationIndex_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_prach_FreqOffset_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 94)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_prach_ConfigIndex_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 63)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_rootSequenceIndex_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  837 }	/* (0..837) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_zeroCorrelationIndex_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_prach_FreqOffset_constr_5 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  0,  94 }	/* (0..94) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_prach_ConfigIndex_constr_6 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_X2ap_PRACH_Configuration_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2ap_PRACH_Configuration, rootSequenceIndex),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_rootSequenceIndex_constraint_1,
		&asn_PER_memb_rootSequenceIndex_constr_2,
		0,
		"rootSequenceIndex"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2ap_PRACH_Configuration, zeroCorrelationIndex),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_zeroCorrelationIndex_constraint_1,
		&asn_PER_memb_zeroCorrelationIndex_constr_3,
		0,
		"zeroCorrelationIndex"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2ap_PRACH_Configuration, highSpeedFlag),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"highSpeedFlag"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2ap_PRACH_Configuration, prach_FreqOffset),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_prach_FreqOffset_constraint_1,
		&asn_PER_memb_prach_FreqOffset_constr_5,
		0,
		"prach-FreqOffset"
		},
	{ ATF_POINTER, 2, offsetof(struct X2ap_PRACH_Configuration, prach_ConfigIndex),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_prach_ConfigIndex_constraint_1,
		&asn_PER_memb_prach_ConfigIndex_constr_6,
		0,
		"prach-ConfigIndex"
		},
	{ ATF_POINTER, 1, offsetof(struct X2ap_PRACH_Configuration, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2ap_IE_Extensions,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"iE-Extensions"
		},
};
static int asn_MAP_X2ap_PRACH_Configuration_oms_1[] = { 4, 5 };
static ber_tlv_tag_t asn_DEF_X2ap_PRACH_Configuration_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_X2ap_PRACH_Configuration_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rootSequenceIndex at 961 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* zeroCorrelationIndex at 962 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* highSpeedFlag at 963 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* prach-FreqOffset at 964 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* prach-ConfigIndex at 965 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* iE-Extensions at 967 */
};
static asn_SEQUENCE_specifics_t asn_SPC_X2ap_PRACH_Configuration_specs_1 = {
	sizeof(struct X2ap_PRACH_Configuration),
	offsetof(struct X2ap_PRACH_Configuration, _asn_ctx),
	asn_MAP_X2ap_PRACH_Configuration_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_X2ap_PRACH_Configuration_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	5,	/* Start extensions */
	7	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_X2ap_PRACH_Configuration = {
	"X2ap-PRACH-Configuration",
	"X2ap-PRACH-Configuration",
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
	asn_DEF_X2ap_PRACH_Configuration_tags_1,
	sizeof(asn_DEF_X2ap_PRACH_Configuration_tags_1)
		/sizeof(asn_DEF_X2ap_PRACH_Configuration_tags_1[0]), /* 1 */
	asn_DEF_X2ap_PRACH_Configuration_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2ap_PRACH_Configuration_tags_1)
		/sizeof(asn_DEF_X2ap_PRACH_Configuration_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_X2ap_PRACH_Configuration_1,
	6,	/* Elements count */
	&asn_SPC_X2ap_PRACH_Configuration_specs_1	/* Additional specs */
};

