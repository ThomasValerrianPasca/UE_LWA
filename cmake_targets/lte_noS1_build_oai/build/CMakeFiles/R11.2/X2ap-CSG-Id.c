/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/mukesh/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#include "X2ap-CSG-Id.h"

int
X2ap_CSG_Id_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size == 27)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using BIT_STRING,
 * so here we adjust the DEF accordingly.
 */
static void
X2ap_CSG_Id_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_BIT_STRING.free_struct;
	td->print_struct   = asn_DEF_BIT_STRING.print_struct;
	td->ber_decoder    = asn_DEF_BIT_STRING.ber_decoder;
	td->der_encoder    = asn_DEF_BIT_STRING.der_encoder;
	td->xer_decoder    = asn_DEF_BIT_STRING.xer_decoder;
	td->xer_encoder    = asn_DEF_BIT_STRING.xer_encoder;
	td->uper_decoder   = asn_DEF_BIT_STRING.uper_decoder;
	td->uper_encoder   = asn_DEF_BIT_STRING.uper_encoder;
	td->aper_decoder   = asn_DEF_BIT_STRING.aper_decoder;
	td->aper_encoder   = asn_DEF_BIT_STRING.aper_encoder;
	td->compare        = asn_DEF_BIT_STRING.compare;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_BIT_STRING.per_constraints;
	td->elements       = asn_DEF_BIT_STRING.elements;
	td->elements_count = asn_DEF_BIT_STRING.elements_count;
	td->specifics      = asn_DEF_BIT_STRING.specifics;
}

void
X2ap_CSG_Id_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	X2ap_CSG_Id_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
X2ap_CSG_Id_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	X2ap_CSG_Id_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
X2ap_CSG_Id_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	X2ap_CSG_Id_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
X2ap_CSG_Id_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	X2ap_CSG_Id_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
X2ap_CSG_Id_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	X2ap_CSG_Id_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
X2ap_CSG_Id_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	X2ap_CSG_Id_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
X2ap_CSG_Id_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	X2ap_CSG_Id_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
X2ap_CSG_Id_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	X2ap_CSG_Id_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

asn_enc_rval_t
X2ap_CSG_Id_encode_aper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	X2ap_CSG_Id_1_inherit_TYPE_descriptor(td);
	return td->aper_encoder(td, constraints, structure, per_out);
}

asn_comp_rval_t * 
X2ap_CSG_Id_compare(asn_TYPE_descriptor_t *td1,
		const void *structure1,
		asn_TYPE_descriptor_t *td2,
		const void *structure2) {
	asn_comp_rval_t * res  = NULL;
	X2ap_CSG_Id_1_inherit_TYPE_descriptor(td1);
	X2ap_CSG_Id_1_inherit_TYPE_descriptor(td2);
	res = td1->compare(td1, structure1, td2, structure2);
	return res;
}

asn_dec_rval_t
X2ap_CSG_Id_decode_aper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	X2ap_CSG_Id_1_inherit_TYPE_descriptor(td);
	return td->aper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_per_constraints_t asn_PER_type_X2ap_CSG_Id_constr_1 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  27,  27 }	/* (SIZE(27..27)) */,
	0, 0	/* No PER value map */
};
static ber_tlv_tag_t asn_DEF_X2ap_CSG_Id_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (3 << 2))
};
asn_TYPE_descriptor_t asn_DEF_X2ap_CSG_Id = {
	"X2ap-CSG-Id",
	"X2ap-CSG-Id",
	X2ap_CSG_Id_free,
	X2ap_CSG_Id_print,
	X2ap_CSG_Id_constraint,
	X2ap_CSG_Id_decode_ber,
	X2ap_CSG_Id_encode_der,
	X2ap_CSG_Id_decode_xer,
	X2ap_CSG_Id_encode_xer,
	X2ap_CSG_Id_decode_uper,
	X2ap_CSG_Id_encode_uper,
	X2ap_CSG_Id_decode_aper,
	X2ap_CSG_Id_encode_aper,
	X2ap_CSG_Id_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_X2ap_CSG_Id_tags_1,
	sizeof(asn_DEF_X2ap_CSG_Id_tags_1)
		/sizeof(asn_DEF_X2ap_CSG_Id_tags_1[0]), /* 1 */
	asn_DEF_X2ap_CSG_Id_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2ap_CSG_Id_tags_1)
		/sizeof(asn_DEF_X2ap_CSG_Id_tags_1[0]), /* 1 */
	&asn_PER_type_X2ap_CSG_Id_constr_1,
	0, 0,	/* No members */
	0	/* No specifics */
};

