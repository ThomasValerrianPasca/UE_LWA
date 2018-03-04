/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_AreaConfiguration_v1130_H_
#define	_AreaConfiguration_v1130_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TrackingAreaCodeList-v1130.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AreaConfiguration-v1130 */
typedef struct AreaConfiguration_v1130 {
	TrackingAreaCodeList_v1130_t	 trackingAreaCodeList_v1130;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AreaConfiguration_v1130_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AreaConfiguration_v1130;

#ifdef __cplusplus
}
#endif

#endif	/* _AreaConfiguration_v1130_H_ */
#include <asn_internal.h>
