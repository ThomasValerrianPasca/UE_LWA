/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_RRCConnectionResume_r13_IEs_H_
#define	_RRCConnectionResume_r13_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NextHopChainingCount.h"
#include <NativeEnumerated.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCConnectionResume_r13_IEs__drb_ContinueROHC_r13 {
	RRCConnectionResume_r13_IEs__drb_ContinueROHC_r13_true	= 0
} e_RRCConnectionResume_r13_IEs__drb_ContinueROHC_r13;

/* Forward declarations */
struct RadioResourceConfigDedicated;
struct MeasConfig;
struct AntennaInfoDedicated_v10i0;

/* RRCConnectionResume-r13-IEs */
typedef struct RRCConnectionResume_r13_IEs {
	struct RadioResourceConfigDedicated	*radioResourceConfigDedicated_r13	/* OPTIONAL */;
	NextHopChainingCount_t	 nextHopChainingCount_r13;
	struct MeasConfig	*measConfig_r13	/* OPTIONAL */;
	struct AntennaInfoDedicated_v10i0	*antennaInfoDedicatedPCell_r13	/* OPTIONAL */;
	long	*drb_ContinueROHC_r13	/* OPTIONAL */;
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	struct RRCConnectionResume_r13_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionResume_r13_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_drb_ContinueROHC_r13_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionResume_r13_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RadioResourceConfigDedicated.h"
#include "MeasConfig.h"
#include "AntennaInfoDedicated-v10i0.h"

#endif	/* _RRCConnectionResume_r13_IEs_H_ */
#include <asn_internal.h>
