/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "CrossCarrierSchedulingConfig-r13.h"

static int
memb_pdsch_Start_r13_constraint_5(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 4)) {
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
memb_cif_InSchedulingCell_r13_constraint_5(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 7)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_pdsch_Start_r13_constr_7 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (1..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_cif_InSchedulingCell_r13_constr_8 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  7 }	/* (1..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_schedulingCellInfo_r13_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_own_r13_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CrossCarrierSchedulingConfig_r13__schedulingCellInfo_r13__own_r13, cif_Presence_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cif-Presence-r13"
		},
};
static ber_tlv_tag_t asn_DEF_own_r13_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_own_r13_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* cif-Presence-r13 at 3632 */
};
static asn_SEQUENCE_specifics_t asn_SPC_own_r13_specs_3 = {
	sizeof(struct CrossCarrierSchedulingConfig_r13__schedulingCellInfo_r13__own_r13),
	offsetof(struct CrossCarrierSchedulingConfig_r13__schedulingCellInfo_r13__own_r13, _asn_ctx),
	asn_MAP_own_r13_tag2el_3,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_own_r13_3 = {
	"own-r13",
	"own-r13",
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
	asn_DEF_own_r13_tags_3,
	sizeof(asn_DEF_own_r13_tags_3)
		/sizeof(asn_DEF_own_r13_tags_3[0]) - 1, /* 1 */
	asn_DEF_own_r13_tags_3,	/* Same as above */
	sizeof(asn_DEF_own_r13_tags_3)
		/sizeof(asn_DEF_own_r13_tags_3[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_own_r13_3,
	1,	/* Elements count */
	&asn_SPC_own_r13_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_other_r13_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CrossCarrierSchedulingConfig_r13__schedulingCellInfo_r13__other_r13, schedulingCellId_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ServCellIndex_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"schedulingCellId-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CrossCarrierSchedulingConfig_r13__schedulingCellInfo_r13__other_r13, pdsch_Start_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_pdsch_Start_r13_constraint_5,
		&asn_PER_memb_pdsch_Start_r13_constr_7,
		0,
		"pdsch-Start-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CrossCarrierSchedulingConfig_r13__schedulingCellInfo_r13__other_r13, cif_InSchedulingCell_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_cif_InSchedulingCell_r13_constraint_5,
		&asn_PER_memb_cif_InSchedulingCell_r13_constr_8,
		0,
		"cif-InSchedulingCell-r13"
		},
};
static ber_tlv_tag_t asn_DEF_other_r13_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_other_r13_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* schedulingCellId-r13 at 3635 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pdsch-Start-r13 at 3636 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* cif-InSchedulingCell-r13 at 3637 */
};
static asn_SEQUENCE_specifics_t asn_SPC_other_r13_specs_5 = {
	sizeof(struct CrossCarrierSchedulingConfig_r13__schedulingCellInfo_r13__other_r13),
	offsetof(struct CrossCarrierSchedulingConfig_r13__schedulingCellInfo_r13__other_r13, _asn_ctx),
	asn_MAP_other_r13_tag2el_5,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_other_r13_5 = {
	"other-r13",
	"other-r13",
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
	asn_DEF_other_r13_tags_5,
	sizeof(asn_DEF_other_r13_tags_5)
		/sizeof(asn_DEF_other_r13_tags_5[0]) - 1, /* 1 */
	asn_DEF_other_r13_tags_5,	/* Same as above */
	sizeof(asn_DEF_other_r13_tags_5)
		/sizeof(asn_DEF_other_r13_tags_5[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_other_r13_5,
	3,	/* Elements count */
	&asn_SPC_other_r13_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_schedulingCellInfo_r13_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CrossCarrierSchedulingConfig_r13__schedulingCellInfo_r13, choice.own_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_own_r13_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"own-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CrossCarrierSchedulingConfig_r13__schedulingCellInfo_r13, choice.other_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_other_r13_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"other-r13"
		},
};
static asn_TYPE_tag2member_t asn_MAP_schedulingCellInfo_r13_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* own-r13 at 3633 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* other-r13 at 3635 */
};
static asn_CHOICE_specifics_t asn_SPC_schedulingCellInfo_r13_specs_2 = {
	sizeof(struct CrossCarrierSchedulingConfig_r13__schedulingCellInfo_r13),
	offsetof(struct CrossCarrierSchedulingConfig_r13__schedulingCellInfo_r13, _asn_ctx),
	offsetof(struct CrossCarrierSchedulingConfig_r13__schedulingCellInfo_r13, present),
	sizeof(((struct CrossCarrierSchedulingConfig_r13__schedulingCellInfo_r13 *)0)->present),
	asn_MAP_schedulingCellInfo_r13_tag2el_2,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_schedulingCellInfo_r13_2 = {
	"schedulingCellInfo-r13",
	"schedulingCellInfo-r13",
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
	&asn_PER_type_schedulingCellInfo_r13_constr_2,
	asn_MBR_schedulingCellInfo_r13_2,
	2,	/* Elements count */
	&asn_SPC_schedulingCellInfo_r13_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_CrossCarrierSchedulingConfig_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CrossCarrierSchedulingConfig_r13, schedulingCellInfo_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_schedulingCellInfo_r13_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"schedulingCellInfo-r13"
		},
};
static ber_tlv_tag_t asn_DEF_CrossCarrierSchedulingConfig_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CrossCarrierSchedulingConfig_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* schedulingCellInfo-r13 at 3633 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CrossCarrierSchedulingConfig_r13_specs_1 = {
	sizeof(struct CrossCarrierSchedulingConfig_r13),
	offsetof(struct CrossCarrierSchedulingConfig_r13, _asn_ctx),
	asn_MAP_CrossCarrierSchedulingConfig_r13_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CrossCarrierSchedulingConfig_r13 = {
	"CrossCarrierSchedulingConfig-r13",
	"CrossCarrierSchedulingConfig-r13",
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
	asn_DEF_CrossCarrierSchedulingConfig_r13_tags_1,
	sizeof(asn_DEF_CrossCarrierSchedulingConfig_r13_tags_1)
		/sizeof(asn_DEF_CrossCarrierSchedulingConfig_r13_tags_1[0]), /* 1 */
	asn_DEF_CrossCarrierSchedulingConfig_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_CrossCarrierSchedulingConfig_r13_tags_1)
		/sizeof(asn_DEF_CrossCarrierSchedulingConfig_r13_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CrossCarrierSchedulingConfig_r13_1,
	1,	/* Elements count */
	&asn_SPC_CrossCarrierSchedulingConfig_r13_specs_1	/* Additional specs */
};

