/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "RRCConnectionSetupComplete-NB-r13-IEs.h"

static int
attachWithoutPDN_Connectivity_r13_6_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
attachWithoutPDN_Connectivity_r13_6_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
attachWithoutPDN_Connectivity_r13_6_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	attachWithoutPDN_Connectivity_r13_6_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
attachWithoutPDN_Connectivity_r13_6_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	attachWithoutPDN_Connectivity_r13_6_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
attachWithoutPDN_Connectivity_r13_6_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	attachWithoutPDN_Connectivity_r13_6_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
attachWithoutPDN_Connectivity_r13_6_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	attachWithoutPDN_Connectivity_r13_6_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
attachWithoutPDN_Connectivity_r13_6_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	attachWithoutPDN_Connectivity_r13_6_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
attachWithoutPDN_Connectivity_r13_6_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	attachWithoutPDN_Connectivity_r13_6_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
attachWithoutPDN_Connectivity_r13_6_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	attachWithoutPDN_Connectivity_r13_6_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
attachWithoutPDN_Connectivity_r13_6_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	attachWithoutPDN_Connectivity_r13_6_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
attachWithoutPDN_Connectivity_r13_6_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	attachWithoutPDN_Connectivity_r13_6_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
attachWithoutPDN_Connectivity_r13_6_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	attachWithoutPDN_Connectivity_r13_6_inherit_TYPE_descriptor(td1);
	attachWithoutPDN_Connectivity_r13_6_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
attachWithoutPDN_Connectivity_r13_6_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	attachWithoutPDN_Connectivity_r13_6_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
up_CIoT_EPS_Optimisation_r13_8_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
up_CIoT_EPS_Optimisation_r13_8_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
up_CIoT_EPS_Optimisation_r13_8_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	up_CIoT_EPS_Optimisation_r13_8_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
up_CIoT_EPS_Optimisation_r13_8_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	up_CIoT_EPS_Optimisation_r13_8_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
up_CIoT_EPS_Optimisation_r13_8_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	up_CIoT_EPS_Optimisation_r13_8_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
up_CIoT_EPS_Optimisation_r13_8_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	up_CIoT_EPS_Optimisation_r13_8_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
up_CIoT_EPS_Optimisation_r13_8_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	up_CIoT_EPS_Optimisation_r13_8_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
up_CIoT_EPS_Optimisation_r13_8_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	up_CIoT_EPS_Optimisation_r13_8_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
up_CIoT_EPS_Optimisation_r13_8_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	up_CIoT_EPS_Optimisation_r13_8_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
up_CIoT_EPS_Optimisation_r13_8_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	up_CIoT_EPS_Optimisation_r13_8_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
up_CIoT_EPS_Optimisation_r13_8_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	up_CIoT_EPS_Optimisation_r13_8_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
up_CIoT_EPS_Optimisation_r13_8_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	up_CIoT_EPS_Optimisation_r13_8_inherit_TYPE_descriptor(td1);
	up_CIoT_EPS_Optimisation_r13_8_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
up_CIoT_EPS_Optimisation_r13_8_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	up_CIoT_EPS_Optimisation_r13_8_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
memb_selectedPLMN_Identity_r13_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 6)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_attachWithoutPDN_Connectivity_r13_constr_6 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_up_CIoT_EPS_Optimisation_r13_constr_8 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_selectedPLMN_Identity_r13_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  6 }	/* (1..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_attachWithoutPDN_Connectivity_r13_value2enum_6[] = {
	{ 0,	4,	"true" }
};
static unsigned int asn_MAP_attachWithoutPDN_Connectivity_r13_enum2value_6[] = {
	0	/* true(0) */
};
static asn_INTEGER_specifics_t asn_SPC_attachWithoutPDN_Connectivity_r13_specs_6 = {
	asn_MAP_attachWithoutPDN_Connectivity_r13_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_attachWithoutPDN_Connectivity_r13_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_attachWithoutPDN_Connectivity_r13_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_attachWithoutPDN_Connectivity_r13_6 = {
	"attachWithoutPDN-Connectivity-r13",
	"attachWithoutPDN-Connectivity-r13",
	attachWithoutPDN_Connectivity_r13_6_free,
	attachWithoutPDN_Connectivity_r13_6_print,
	attachWithoutPDN_Connectivity_r13_6_constraint,
	attachWithoutPDN_Connectivity_r13_6_decode_ber,
	attachWithoutPDN_Connectivity_r13_6_encode_der,
	attachWithoutPDN_Connectivity_r13_6_decode_xer,
	attachWithoutPDN_Connectivity_r13_6_encode_xer,
	attachWithoutPDN_Connectivity_r13_6_decode_uper,
	attachWithoutPDN_Connectivity_r13_6_encode_uper,
	attachWithoutPDN_Connectivity_r13_6_decode_aper,
	attachWithoutPDN_Connectivity_r13_6_encode_aper,
	attachWithoutPDN_Connectivity_r13_6_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_attachWithoutPDN_Connectivity_r13_tags_6,
	sizeof(asn_DEF_attachWithoutPDN_Connectivity_r13_tags_6)
		/sizeof(asn_DEF_attachWithoutPDN_Connectivity_r13_tags_6[0]) - 1, /* 1 */
	asn_DEF_attachWithoutPDN_Connectivity_r13_tags_6,	/* Same as above */
	sizeof(asn_DEF_attachWithoutPDN_Connectivity_r13_tags_6)
		/sizeof(asn_DEF_attachWithoutPDN_Connectivity_r13_tags_6[0]), /* 2 */
	&asn_PER_type_attachWithoutPDN_Connectivity_r13_constr_6,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_attachWithoutPDN_Connectivity_r13_specs_6	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_up_CIoT_EPS_Optimisation_r13_value2enum_8[] = {
	{ 0,	4,	"true" }
};
static unsigned int asn_MAP_up_CIoT_EPS_Optimisation_r13_enum2value_8[] = {
	0	/* true(0) */
};
static asn_INTEGER_specifics_t asn_SPC_up_CIoT_EPS_Optimisation_r13_specs_8 = {
	asn_MAP_up_CIoT_EPS_Optimisation_r13_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_up_CIoT_EPS_Optimisation_r13_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_up_CIoT_EPS_Optimisation_r13_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_up_CIoT_EPS_Optimisation_r13_8 = {
	"up-CIoT-EPS-Optimisation-r13",
	"up-CIoT-EPS-Optimisation-r13",
	up_CIoT_EPS_Optimisation_r13_8_free,
	up_CIoT_EPS_Optimisation_r13_8_print,
	up_CIoT_EPS_Optimisation_r13_8_constraint,
	up_CIoT_EPS_Optimisation_r13_8_decode_ber,
	up_CIoT_EPS_Optimisation_r13_8_encode_der,
	up_CIoT_EPS_Optimisation_r13_8_decode_xer,
	up_CIoT_EPS_Optimisation_r13_8_encode_xer,
	up_CIoT_EPS_Optimisation_r13_8_decode_uper,
	up_CIoT_EPS_Optimisation_r13_8_encode_uper,
	up_CIoT_EPS_Optimisation_r13_8_decode_aper,
	up_CIoT_EPS_Optimisation_r13_8_encode_aper,
	up_CIoT_EPS_Optimisation_r13_8_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_up_CIoT_EPS_Optimisation_r13_tags_8,
	sizeof(asn_DEF_up_CIoT_EPS_Optimisation_r13_tags_8)
		/sizeof(asn_DEF_up_CIoT_EPS_Optimisation_r13_tags_8[0]) - 1, /* 1 */
	asn_DEF_up_CIoT_EPS_Optimisation_r13_tags_8,	/* Same as above */
	sizeof(asn_DEF_up_CIoT_EPS_Optimisation_r13_tags_8)
		/sizeof(asn_DEF_up_CIoT_EPS_Optimisation_r13_tags_8[0]), /* 2 */
	&asn_PER_type_up_CIoT_EPS_Optimisation_r13_constr_8,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_up_CIoT_EPS_Optimisation_r13_specs_8	/* Additional specs */
};

static ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_11 = {
	sizeof(struct RRCConnectionSetupComplete_NB_r13_IEs__nonCriticalExtension),
	offsetof(struct RRCConnectionSetupComplete_NB_r13_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_11 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
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
	asn_DEF_nonCriticalExtension_tags_11,
	sizeof(asn_DEF_nonCriticalExtension_tags_11)
		/sizeof(asn_DEF_nonCriticalExtension_tags_11[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_11,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_11)
		/sizeof(asn_DEF_nonCriticalExtension_tags_11[0]), /* 2 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RRCConnectionSetupComplete_NB_r13_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionSetupComplete_NB_r13_IEs, selectedPLMN_Identity_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_selectedPLMN_Identity_r13_constraint_1,
		&asn_PER_memb_selectedPLMN_Identity_r13_constr_2,
		0,
		"selectedPLMN-Identity-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct RRCConnectionSetupComplete_NB_r13_IEs, s_TMSI_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S_TMSI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"s-TMSI-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionSetupComplete_NB_r13_IEs, registeredMME_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RegisteredMME,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"registeredMME-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionSetupComplete_NB_r13_IEs, dedicatedInfoNAS_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DedicatedInfoNAS,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dedicatedInfoNAS-r13"
		},
	{ ATF_POINTER, 4, offsetof(struct RRCConnectionSetupComplete_NB_r13_IEs, attachWithoutPDN_Connectivity_r13),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_attachWithoutPDN_Connectivity_r13_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"attachWithoutPDN-Connectivity-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct RRCConnectionSetupComplete_NB_r13_IEs, up_CIoT_EPS_Optimisation_r13),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_up_CIoT_EPS_Optimisation_r13_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"up-CIoT-EPS-Optimisation-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct RRCConnectionSetupComplete_NB_r13_IEs, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionSetupComplete_NB_r13_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonCriticalExtension"
		},
};
static int asn_MAP_RRCConnectionSetupComplete_NB_r13_IEs_oms_1[] = { 1, 2, 4, 5, 6, 7 };
static ber_tlv_tag_t asn_DEF_RRCConnectionSetupComplete_NB_r13_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_RRCConnectionSetupComplete_NB_r13_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* selectedPLMN-Identity-r13 at 10255 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* s-TMSI-r13 at 10256 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* registeredMME-r13 at 10257 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* dedicatedInfoNAS-r13 at 10258 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* attachWithoutPDN-Connectivity-r13 at 10259 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* up-CIoT-EPS-Optimisation-r13 at 10260 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* lateNonCriticalExtension at 10261 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* nonCriticalExtension at 10262 */
};
static asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionSetupComplete_NB_r13_IEs_specs_1 = {
	sizeof(struct RRCConnectionSetupComplete_NB_r13_IEs),
	offsetof(struct RRCConnectionSetupComplete_NB_r13_IEs, _asn_ctx),
	asn_MAP_RRCConnectionSetupComplete_NB_r13_IEs_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_RRCConnectionSetupComplete_NB_r13_IEs_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RRCConnectionSetupComplete_NB_r13_IEs = {
	"RRCConnectionSetupComplete-NB-r13-IEs",
	"RRCConnectionSetupComplete-NB-r13-IEs",
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
	asn_DEF_RRCConnectionSetupComplete_NB_r13_IEs_tags_1,
	sizeof(asn_DEF_RRCConnectionSetupComplete_NB_r13_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionSetupComplete_NB_r13_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRCConnectionSetupComplete_NB_r13_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCConnectionSetupComplete_NB_r13_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionSetupComplete_NB_r13_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RRCConnectionSetupComplete_NB_r13_IEs_1,
	8,	/* Elements count */
	&asn_SPC_RRCConnectionSetupComplete_NB_r13_IEs_specs_1	/* Additional specs */
};

