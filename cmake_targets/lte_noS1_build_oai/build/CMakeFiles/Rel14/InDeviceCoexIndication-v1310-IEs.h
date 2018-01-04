/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_InDeviceCoexIndication_v1310_IEs_H_
#define	_InDeviceCoexIndication_v1310_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AffectedCarrierFreqList_v1310;
struct AffectedCarrierFreqCombList_r13;

/* InDeviceCoexIndication-v1310-IEs */
typedef struct InDeviceCoexIndication_v1310_IEs {
	struct AffectedCarrierFreqList_v1310	*affectedCarrierFreqList_v1310	/* OPTIONAL */;
	struct AffectedCarrierFreqCombList_r13	*affectedCarrierFreqCombList_r13	/* OPTIONAL */;
	struct InDeviceCoexIndication_v1310_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InDeviceCoexIndication_v1310_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InDeviceCoexIndication_v1310_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AffectedCarrierFreqList-v1310.h"
#include "AffectedCarrierFreqCombList-r13.h"

#endif	/* _InDeviceCoexIndication_v1310_IEs_H_ */
#include <asn_internal.h>
