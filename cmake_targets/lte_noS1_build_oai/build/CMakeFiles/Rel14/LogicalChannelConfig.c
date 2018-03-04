/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "LogicalChannelConfig.h"

static int
prioritisedBitRate_4_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
prioritisedBitRate_4_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
prioritisedBitRate_4_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	prioritisedBitRate_4_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
prioritisedBitRate_4_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	prioritisedBitRate_4_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
prioritisedBitRate_4_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	prioritisedBitRate_4_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
prioritisedBitRate_4_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	prioritisedBitRate_4_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
prioritisedBitRate_4_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	prioritisedBitRate_4_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
prioritisedBitRate_4_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	prioritisedBitRate_4_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
prioritisedBitRate_4_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	prioritisedBitRate_4_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
prioritisedBitRate_4_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	prioritisedBitRate_4_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
prioritisedBitRate_4_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	prioritisedBitRate_4_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
prioritisedBitRate_4_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	prioritisedBitRate_4_inherit_TYPE_descriptor(td1);
	prioritisedBitRate_4_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
prioritisedBitRate_4_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	prioritisedBitRate_4_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
bucketSizeDuration_21_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
bucketSizeDuration_21_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
bucketSizeDuration_21_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	bucketSizeDuration_21_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
bucketSizeDuration_21_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	bucketSizeDuration_21_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
bucketSizeDuration_21_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	bucketSizeDuration_21_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
bucketSizeDuration_21_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	bucketSizeDuration_21_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
bucketSizeDuration_21_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	bucketSizeDuration_21_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
bucketSizeDuration_21_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	bucketSizeDuration_21_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
bucketSizeDuration_21_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	bucketSizeDuration_21_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
bucketSizeDuration_21_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	bucketSizeDuration_21_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
bucketSizeDuration_21_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	bucketSizeDuration_21_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
bucketSizeDuration_21_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	bucketSizeDuration_21_inherit_TYPE_descriptor(td1);
	bucketSizeDuration_21_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
bucketSizeDuration_21_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	bucketSizeDuration_21_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static int
memb_priority_constraint_2(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 16)) {
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
memb_logicalChannelGroup_constraint_2(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 3)) {
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
logicalChannelSR_Mask_r9_33_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
logicalChannelSR_Mask_r9_33_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
logicalChannelSR_Mask_r9_33_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	logicalChannelSR_Mask_r9_33_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
logicalChannelSR_Mask_r9_33_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	logicalChannelSR_Mask_r9_33_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
logicalChannelSR_Mask_r9_33_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	logicalChannelSR_Mask_r9_33_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
logicalChannelSR_Mask_r9_33_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	logicalChannelSR_Mask_r9_33_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
logicalChannelSR_Mask_r9_33_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	logicalChannelSR_Mask_r9_33_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
logicalChannelSR_Mask_r9_33_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	logicalChannelSR_Mask_r9_33_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
logicalChannelSR_Mask_r9_33_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	logicalChannelSR_Mask_r9_33_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
logicalChannelSR_Mask_r9_33_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	logicalChannelSR_Mask_r9_33_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_enc_rval_t
logicalChannelSR_Mask_r9_33_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	logicalChannelSR_Mask_r9_33_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

static asn_comp_rval_t * 
logicalChannelSR_Mask_r9_33_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	logicalChannelSR_Mask_r9_33_inherit_TYPE_descriptor(td1);
	logicalChannelSR_Mask_r9_33_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

static asn_dec_rval_t
logicalChannelSR_Mask_r9_33_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	logicalChannelSR_Mask_r9_33_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_per_constraints_t asn_PER_type_prioritisedBitRate_constr_4 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_bucketSizeDuration_constr_21 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_priority_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (1..16) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_logicalChannelGroup_constr_30 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_logicalChannelSR_Mask_r9_constr_33 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_prioritisedBitRate_value2enum_4[] = {
	{ 0,	5,	"kBps0" },
	{ 1,	5,	"kBps8" },
	{ 2,	6,	"kBps16" },
	{ 3,	6,	"kBps32" },
	{ 4,	6,	"kBps64" },
	{ 5,	7,	"kBps128" },
	{ 6,	7,	"kBps256" },
	{ 7,	8,	"infinity" },
	{ 8,	13,	"kBps512-v1020" },
	{ 9,	14,	"kBps1024-v1020" },
	{ 10,	14,	"kBps2048-v1020" },
	{ 11,	6,	"spare5" },
	{ 12,	6,	"spare4" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static unsigned int asn_MAP_prioritisedBitRate_enum2value_4[] = {
	7,	/* infinity(7) */
	0,	/* kBps0(0) */
	9,	/* kBps1024-v1020(9) */
	5,	/* kBps128(5) */
	2,	/* kBps16(2) */
	10,	/* kBps2048-v1020(10) */
	6,	/* kBps256(6) */
	3,	/* kBps32(3) */
	8,	/* kBps512-v1020(8) */
	4,	/* kBps64(4) */
	1,	/* kBps8(1) */
	15,	/* spare1(15) */
	14,	/* spare2(14) */
	13,	/* spare3(13) */
	12,	/* spare4(12) */
	11	/* spare5(11) */
};
static asn_INTEGER_specifics_t asn_SPC_prioritisedBitRate_specs_4 = {
	asn_MAP_prioritisedBitRate_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_prioritisedBitRate_enum2value_4,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_prioritisedBitRate_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_prioritisedBitRate_4 = {
	"prioritisedBitRate",
	"prioritisedBitRate",
	prioritisedBitRate_4_free,
	prioritisedBitRate_4_print,
	prioritisedBitRate_4_constraint,
	prioritisedBitRate_4_decode_ber,
	prioritisedBitRate_4_encode_der,
	prioritisedBitRate_4_decode_xer,
	prioritisedBitRate_4_encode_xer,
	prioritisedBitRate_4_decode_uper,
	prioritisedBitRate_4_encode_uper,
	prioritisedBitRate_4_decode_aper,
	prioritisedBitRate_4_encode_aper,
	prioritisedBitRate_4_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_prioritisedBitRate_tags_4,
	sizeof(asn_DEF_prioritisedBitRate_tags_4)
		/sizeof(asn_DEF_prioritisedBitRate_tags_4[0]) - 1, /* 1 */
	asn_DEF_prioritisedBitRate_tags_4,	/* Same as above */
	sizeof(asn_DEF_prioritisedBitRate_tags_4)
		/sizeof(asn_DEF_prioritisedBitRate_tags_4[0]), /* 2 */
	&asn_PER_type_prioritisedBitRate_constr_4,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_prioritisedBitRate_specs_4	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_bucketSizeDuration_value2enum_21[] = {
	{ 0,	4,	"ms50" },
	{ 1,	5,	"ms100" },
	{ 2,	5,	"ms150" },
	{ 3,	5,	"ms300" },
	{ 4,	5,	"ms500" },
	{ 5,	6,	"ms1000" },
	{ 6,	6,	"spare2" },
	{ 7,	6,	"spare1" }
};
static unsigned int asn_MAP_bucketSizeDuration_enum2value_21[] = {
	1,	/* ms100(1) */
	5,	/* ms1000(5) */
	2,	/* ms150(2) */
	3,	/* ms300(3) */
	0,	/* ms50(0) */
	4,	/* ms500(4) */
	7,	/* spare1(7) */
	6	/* spare2(6) */
};
static asn_INTEGER_specifics_t asn_SPC_bucketSizeDuration_specs_21 = {
	asn_MAP_bucketSizeDuration_value2enum_21,	/* "tag" => N; sorted by tag */
	asn_MAP_bucketSizeDuration_enum2value_21,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_bucketSizeDuration_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_bucketSizeDuration_21 = {
	"bucketSizeDuration",
	"bucketSizeDuration",
	bucketSizeDuration_21_free,
	bucketSizeDuration_21_print,
	bucketSizeDuration_21_constraint,
	bucketSizeDuration_21_decode_ber,
	bucketSizeDuration_21_encode_der,
	bucketSizeDuration_21_decode_xer,
	bucketSizeDuration_21_encode_xer,
	bucketSizeDuration_21_decode_uper,
	bucketSizeDuration_21_encode_uper,
	bucketSizeDuration_21_decode_aper,
	bucketSizeDuration_21_encode_aper,
	bucketSizeDuration_21_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_bucketSizeDuration_tags_21,
	sizeof(asn_DEF_bucketSizeDuration_tags_21)
		/sizeof(asn_DEF_bucketSizeDuration_tags_21[0]) - 1, /* 1 */
	asn_DEF_bucketSizeDuration_tags_21,	/* Same as above */
	sizeof(asn_DEF_bucketSizeDuration_tags_21)
		/sizeof(asn_DEF_bucketSizeDuration_tags_21[0]), /* 2 */
	&asn_PER_type_bucketSizeDuration_constr_21,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_bucketSizeDuration_specs_21	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ul_SpecificParameters_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LogicalChannelConfig__ul_SpecificParameters, priority),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_priority_constraint_2,
		&asn_PER_memb_priority_constr_3,
		0,
		"priority"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LogicalChannelConfig__ul_SpecificParameters, prioritisedBitRate),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_prioritisedBitRate_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"prioritisedBitRate"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LogicalChannelConfig__ul_SpecificParameters, bucketSizeDuration),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_bucketSizeDuration_21,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"bucketSizeDuration"
		},
	{ ATF_POINTER, 1, offsetof(struct LogicalChannelConfig__ul_SpecificParameters, logicalChannelGroup),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_logicalChannelGroup_constraint_2,
		&asn_PER_memb_logicalChannelGroup_constr_30,
		0,
		"logicalChannelGroup"
		},
};
static int asn_MAP_ul_SpecificParameters_oms_2[] = { 3 };
static ber_tlv_tag_t asn_DEF_ul_SpecificParameters_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ul_SpecificParameters_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* priority at 3932 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* prioritisedBitRate at 3934 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* bucketSizeDuration at 3939 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* logicalChannelGroup at 3941 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ul_SpecificParameters_specs_2 = {
	sizeof(struct LogicalChannelConfig__ul_SpecificParameters),
	offsetof(struct LogicalChannelConfig__ul_SpecificParameters, _asn_ctx),
	asn_MAP_ul_SpecificParameters_tag2el_2,
	4,	/* Count of tags in the map */
	asn_MAP_ul_SpecificParameters_oms_2,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ul_SpecificParameters_2 = {
	"ul-SpecificParameters",
	"ul-SpecificParameters",
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
	asn_DEF_ul_SpecificParameters_tags_2,
	sizeof(asn_DEF_ul_SpecificParameters_tags_2)
		/sizeof(asn_DEF_ul_SpecificParameters_tags_2[0]) - 1, /* 1 */
	asn_DEF_ul_SpecificParameters_tags_2,	/* Same as above */
	sizeof(asn_DEF_ul_SpecificParameters_tags_2)
		/sizeof(asn_DEF_ul_SpecificParameters_tags_2[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ul_SpecificParameters_2,
	4,	/* Elements count */
	&asn_SPC_ul_SpecificParameters_specs_2	/* Additional specs */
};

static asn_INTEGER_enum_map_t asn_MAP_logicalChannelSR_Mask_r9_value2enum_33[] = {
	{ 0,	5,	"setup" }
};
static unsigned int asn_MAP_logicalChannelSR_Mask_r9_enum2value_33[] = {
	0	/* setup(0) */
};
static asn_INTEGER_specifics_t asn_SPC_logicalChannelSR_Mask_r9_specs_33 = {
	asn_MAP_logicalChannelSR_Mask_r9_value2enum_33,	/* "tag" => N; sorted by tag */
	asn_MAP_logicalChannelSR_Mask_r9_enum2value_33,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_logicalChannelSR_Mask_r9_tags_33[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_logicalChannelSR_Mask_r9_33 = {
	"logicalChannelSR-Mask-r9",
	"logicalChannelSR-Mask-r9",
	logicalChannelSR_Mask_r9_33_free,
	logicalChannelSR_Mask_r9_33_print,
	logicalChannelSR_Mask_r9_33_constraint,
	logicalChannelSR_Mask_r9_33_decode_ber,
	logicalChannelSR_Mask_r9_33_encode_der,
	logicalChannelSR_Mask_r9_33_decode_xer,
	logicalChannelSR_Mask_r9_33_encode_xer,
	logicalChannelSR_Mask_r9_33_decode_uper,
	logicalChannelSR_Mask_r9_33_encode_uper,
	logicalChannelSR_Mask_r9_33_decode_aper,
	logicalChannelSR_Mask_r9_33_encode_aper,
	logicalChannelSR_Mask_r9_33_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_logicalChannelSR_Mask_r9_tags_33,
	sizeof(asn_DEF_logicalChannelSR_Mask_r9_tags_33)
		/sizeof(asn_DEF_logicalChannelSR_Mask_r9_tags_33[0]) - 1, /* 1 */
	asn_DEF_logicalChannelSR_Mask_r9_tags_33,	/* Same as above */
	sizeof(asn_DEF_logicalChannelSR_Mask_r9_tags_33)
		/sizeof(asn_DEF_logicalChannelSR_Mask_r9_tags_33[0]), /* 2 */
	&asn_PER_type_logicalChannelSR_Mask_r9_constr_33,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_logicalChannelSR_Mask_r9_specs_33	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext1_32[] = {
	{ ATF_POINTER, 1, offsetof(struct LogicalChannelConfig__ext1, logicalChannelSR_Mask_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_logicalChannelSR_Mask_r9_33,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"logicalChannelSR-Mask-r9"
		},
};
static int asn_MAP_ext1_oms_32[] = { 0 };
static ber_tlv_tag_t asn_DEF_ext1_tags_32[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_32[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* logicalChannelSR-Mask-r9 at 3944 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_32 = {
	sizeof(struct LogicalChannelConfig__ext1),
	offsetof(struct LogicalChannelConfig__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_32,
	1,	/* Count of tags in the map */
	asn_MAP_ext1_oms_32,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_32 = {
	"ext1",
	"ext1",
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
	asn_DEF_ext1_tags_32,
	sizeof(asn_DEF_ext1_tags_32)
		/sizeof(asn_DEF_ext1_tags_32[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_32,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_32)
		/sizeof(asn_DEF_ext1_tags_32[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ext1_32,
	1,	/* Elements count */
	&asn_SPC_ext1_specs_32	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext2_35[] = {
	{ ATF_POINTER, 1, offsetof(struct LogicalChannelConfig__ext2, logicalChannelSR_Prohibit_r12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"logicalChannelSR-Prohibit-r12"
		},
};
static int asn_MAP_ext2_oms_35[] = { 0 };
static ber_tlv_tag_t asn_DEF_ext2_tags_35[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ext2_tag2el_35[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* logicalChannelSR-Prohibit-r12 at 3946 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext2_specs_35 = {
	sizeof(struct LogicalChannelConfig__ext2),
	offsetof(struct LogicalChannelConfig__ext2, _asn_ctx),
	asn_MAP_ext2_tag2el_35,
	1,	/* Count of tags in the map */
	asn_MAP_ext2_oms_35,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext2_35 = {
	"ext2",
	"ext2",
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
	asn_DEF_ext2_tags_35,
	sizeof(asn_DEF_ext2_tags_35)
		/sizeof(asn_DEF_ext2_tags_35[0]) - 1, /* 1 */
	asn_DEF_ext2_tags_35,	/* Same as above */
	sizeof(asn_DEF_ext2_tags_35)
		/sizeof(asn_DEF_ext2_tags_35[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ext2_35,
	1,	/* Elements count */
	&asn_SPC_ext2_specs_35	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext3_37[] = {
	{ ATF_POINTER, 1, offsetof(struct LogicalChannelConfig__ext3, laa_Allowed_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"laa-Allowed-r14"
		},
};
static int asn_MAP_ext3_oms_37[] = { 0 };
static ber_tlv_tag_t asn_DEF_ext3_tags_37[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ext3_tag2el_37[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* laa-Allowed-r14 at 3948 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext3_specs_37 = {
	sizeof(struct LogicalChannelConfig__ext3),
	offsetof(struct LogicalChannelConfig__ext3, _asn_ctx),
	asn_MAP_ext3_tag2el_37,
	1,	/* Count of tags in the map */
	asn_MAP_ext3_oms_37,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext3_37 = {
	"ext3",
	"ext3",
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
	asn_DEF_ext3_tags_37,
	sizeof(asn_DEF_ext3_tags_37)
		/sizeof(asn_DEF_ext3_tags_37[0]) - 1, /* 1 */
	asn_DEF_ext3_tags_37,	/* Same as above */
	sizeof(asn_DEF_ext3_tags_37)
		/sizeof(asn_DEF_ext3_tags_37[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ext3_37,
	1,	/* Elements count */
	&asn_SPC_ext3_specs_37	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_LogicalChannelConfig_1[] = {
	{ ATF_POINTER, 4, offsetof(struct LogicalChannelConfig, ul_SpecificParameters),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_ul_SpecificParameters_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-SpecificParameters"
		},
	{ ATF_POINTER, 3, offsetof(struct LogicalChannelConfig, ext1),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ext1_32,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ext1"
		},
	{ ATF_POINTER, 2, offsetof(struct LogicalChannelConfig, ext2),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_ext2_35,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ext2"
		},
	{ ATF_POINTER, 1, offsetof(struct LogicalChannelConfig, ext3),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_ext3_37,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ext3"
		},
};
static int asn_MAP_LogicalChannelConfig_oms_1[] = { 0, 1, 2, 3 };
static ber_tlv_tag_t asn_DEF_LogicalChannelConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_LogicalChannelConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-SpecificParameters at 3932 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ext1 at 3944 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ext2 at 3946 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* ext3 at 3948 */
};
static asn_SEQUENCE_specifics_t asn_SPC_LogicalChannelConfig_specs_1 = {
	sizeof(struct LogicalChannelConfig),
	offsetof(struct LogicalChannelConfig, _asn_ctx),
	asn_MAP_LogicalChannelConfig_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_LogicalChannelConfig_oms_1,	/* Optional members */
	1, 3,	/* Root/Additions */
	0,	/* Start extensions */
	5	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_LogicalChannelConfig = {
	"LogicalChannelConfig",
	"LogicalChannelConfig",
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
	asn_DEF_LogicalChannelConfig_tags_1,
	sizeof(asn_DEF_LogicalChannelConfig_tags_1)
		/sizeof(asn_DEF_LogicalChannelConfig_tags_1[0]), /* 1 */
	asn_DEF_LogicalChannelConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_LogicalChannelConfig_tags_1)
		/sizeof(asn_DEF_LogicalChannelConfig_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_LogicalChannelConfig_1,
	4,	/* Elements count */
	&asn_SPC_LogicalChannelConfig_specs_1	/* Additional specs */
};

