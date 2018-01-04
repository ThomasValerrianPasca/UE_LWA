/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_RLC_Parameters_v1310_H_
#define	_RLC_Parameters_v1310_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RLC_Parameters_v1310__extendedRLC_SN_SO_Field_r13 {
	RLC_Parameters_v1310__extendedRLC_SN_SO_Field_r13_supported	= 0
} e_RLC_Parameters_v1310__extendedRLC_SN_SO_Field_r13;

/* RLC-Parameters-v1310 */
typedef struct RLC_Parameters_v1310 {
	long	*extendedRLC_SN_SO_Field_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RLC_Parameters_v1310_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_extendedRLC_SN_SO_Field_r13_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RLC_Parameters_v1310;

#ifdef __cplusplus
}
#endif

#endif	/* _RLC_Parameters_v1310_H_ */
#include <asn_internal.h>
