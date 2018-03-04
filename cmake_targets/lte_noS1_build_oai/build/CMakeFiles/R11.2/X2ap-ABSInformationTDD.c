/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/mukesh/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#include "X2ap-ABSInformationTDD.h"

static int
numberOfCellSpecificAntennaPortsTDD_3_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
numberOfCellSpecificAntennaPortsTDD_3_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	td->aper_decoder   = asn_DEF_NativeEnumerated.aper_decoder;
	td->aper_encoder   = asn_DEF_NativeEnumerated.aper_encoder;
	td->compare        = asn_DEF_NativeEnumerated.compare;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
numberOfCellSpecificAntennaPortsTDD_3_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	numberOfCellSpecificAntennaPortsTDD_3_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
numberOfCellSpecificAntennaPortsTDD_3_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	numberOfCellSpecificAntennaPortsTDD_3_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
numberOfCellSpecificAntennaPortsTDD_3_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	numberOfCellSpecificAntennaPortsTDD_3_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
numberOfCellSpecificAntennaPortsTDD_3_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	numberOfCellSpecificAntennaPortsTDD_3_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
numberOfCellSpecificAntennaPortsTDD_3_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	numberOfCellSpecificAntennaPortsTDD_3_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
numberOfCellSpecificAntennaPortsTDD_3_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	numberOfCellSpecificAntennaPortsTDD_3_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
numberOfCellSpecificAntennaPortsTDD_3_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	numberOfCellSpecificAntennaPortsTDD_3_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
numberOfCellSpecificAntennaPortsTDD_3_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	numberOfCellSpecificAntennaPortsTDD_3_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
numberOfCellSpecificAntennaPortsTDD_3_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	numberOfCellSpecificAntennaPortsTDD_3_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
numberOfCellSpecificAntennaPortsTDD_3_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	numberOfCellSpecificAntennaPortsTDD_3_inherit_TYPE_descriptor(td1);
	numberOfCellSpecificAntennaPortsTDD_3_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
numberOfCellSpecificAntennaPortsTDD_3_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	numberOfCellSpecificAntennaPortsTDD_3_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
memb_abs_pattern_info_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size >= 1 && size <= 70)) {
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
memb_measurement_subset_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size >= 1 && size <= 70)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_numberOfCellSpecificAntennaPortsTDD_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_abs_pattern_info_constr_2 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  7,  7,  1,  70 }	/* (SIZE(1..70,...)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_measurement_subset_constr_8 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  7,  7,  1,  70 }	/* (SIZE(1..70,...)) */,
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_numberOfCellSpecificAntennaPortsTDD_value2enum_3[] = {
	{ 0,	3,	"one" },
	{ 1,	3,	"two" },
	{ 2,	4,	"four" }
	/* This list is extensible */
};
static unsigned int asn_MAP_numberOfCellSpecificAntennaPortsTDD_enum2value_3[] = {
	2,	/* four(2) */
	0,	/* one(0) */
	1	/* two(1) */
	/* This list is extensible */
};
static asn_INTEGER_specifics_t asn_SPC_numberOfCellSpecificAntennaPortsTDD_specs_3 = {
	asn_MAP_numberOfCellSpecificAntennaPortsTDD_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_numberOfCellSpecificAntennaPortsTDD_enum2value_3,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	4,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_numberOfCellSpecificAntennaPortsTDD_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_numberOfCellSpecificAntennaPortsTDD_3 = {
	"numberOfCellSpecificAntennaPortsTDD",
	"numberOfCellSpecificAntennaPortsTDD",
	numberOfCellSpecificAntennaPortsTDD_3_free,
	numberOfCellSpecificAntennaPortsTDD_3_print,
	numberOfCellSpecificAntennaPortsTDD_3_constraint,
	numberOfCellSpecificAntennaPortsTDD_3_decode_ber,
	numberOfCellSpecificAntennaPortsTDD_3_encode_der,
	numberOfCellSpecificAntennaPortsTDD_3_decode_xer,
	numberOfCellSpecificAntennaPortsTDD_3_encode_xer,
	numberOfCellSpecificAntennaPortsTDD_3_decode_uper,
	numberOfCellSpecificAntennaPortsTDD_3_encode_uper,
	numberOfCellSpecificAntennaPortsTDD_3_decode_aper,
	numberOfCellSpecificAntennaPortsTDD_3_encode_aper,
	numberOfCellSpecificAntennaPortsTDD_3_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_numberOfCellSpecificAntennaPortsTDD_tags_3,
	sizeof(asn_DEF_numberOfCellSpecificAntennaPortsTDD_tags_3)
		/sizeof(asn_DEF_numberOfCellSpecificAntennaPortsTDD_tags_3[0]) - 1, /* 1 */
	asn_DEF_numberOfCellSpecificAntennaPortsTDD_tags_3,	/* Same as above */
	sizeof(asn_DEF_numberOfCellSpecificAntennaPortsTDD_tags_3)
		/sizeof(asn_DEF_numberOfCellSpecificAntennaPortsTDD_tags_3[0]), /* 2 */
	&asn_PER_type_numberOfCellSpecificAntennaPortsTDD_constr_3,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_numberOfCellSpecificAntennaPortsTDD_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_X2ap_ABSInformationTDD_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2ap_ABSInformationTDD, abs_pattern_info),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_abs_pattern_info_constraint_1,
		&asn_PER_memb_abs_pattern_info_constr_2,
		0,
		"abs-pattern-info"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2ap_ABSInformationTDD, numberOfCellSpecificAntennaPortsTDD),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_numberOfCellSpecificAntennaPortsTDD_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"numberOfCellSpecificAntennaPortsTDD"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2ap_ABSInformationTDD, measurement_subset),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		memb_measurement_subset_constraint_1,
		&asn_PER_memb_measurement_subset_constr_8,
		0,
		"measurement-subset"
		},
	{ ATF_POINTER, 1, offsetof(struct X2ap_ABSInformationTDD, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_X2ap_IE_Extensions,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"iE-Extensions"
		},
};
static int asn_MAP_X2ap_ABSInformationTDD_oms_1[] = { 3 };
static ber_tlv_tag_t asn_DEF_X2ap_ABSInformationTDD_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_X2ap_ABSInformationTDD_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* abs-pattern-info at 98 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* numberOfCellSpecificAntennaPortsTDD at 100 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* measurement-subset at 101 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions at 103 */
};
static asn_SEQUENCE_specifics_t asn_SPC_X2ap_ABSInformationTDD_specs_1 = {
	sizeof(struct X2ap_ABSInformationTDD),
	offsetof(struct X2ap_ABSInformationTDD, _asn_ctx),
	asn_MAP_X2ap_ABSInformationTDD_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_X2ap_ABSInformationTDD_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* Start extensions */
	5	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_X2ap_ABSInformationTDD = {
	"X2ap-ABSInformationTDD",
	"X2ap-ABSInformationTDD",
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
	asn_DEF_X2ap_ABSInformationTDD_tags_1,
	sizeof(asn_DEF_X2ap_ABSInformationTDD_tags_1)
		/sizeof(asn_DEF_X2ap_ABSInformationTDD_tags_1[0]), /* 1 */
	asn_DEF_X2ap_ABSInformationTDD_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2ap_ABSInformationTDD_tags_1)
		/sizeof(asn_DEF_X2ap_ABSInformationTDD_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_X2ap_ABSInformationTDD_1,
	4,	/* Elements count */
	&asn_SPC_X2ap_ABSInformationTDD_specs_1	/* Additional specs */
};

