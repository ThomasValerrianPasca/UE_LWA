/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_SCG_ConfigPartSCG_r12_H_
#define	_SCG_ConfigPartSCG_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RadioResourceConfigDedicatedSCG_r12;
struct SCellToReleaseList_r10;
struct PSCellToAddMod_r12;
struct SCellToAddModList_r10;
struct MobilityControlInfoSCG_r12;
struct SCellToReleaseListExt_r13;
struct SCellToAddModListExt_r13;

/* SCG-ConfigPartSCG-r12 */
typedef struct SCG_ConfigPartSCG_r12 {
	struct RadioResourceConfigDedicatedSCG_r12	*radioResourceConfigDedicatedSCG_r12	/* OPTIONAL */;
	struct SCellToReleaseList_r10	*sCellToReleaseListSCG_r12	/* OPTIONAL */;
	struct PSCellToAddMod_r12	*pSCellToAddMod_r12	/* OPTIONAL */;
	struct SCellToAddModList_r10	*sCellToAddModListSCG_r12	/* OPTIONAL */;
	struct MobilityControlInfoSCG_r12	*mobilityControlInfoSCG_r12	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct SCG_ConfigPartSCG_r12__ext1 {
		struct SCellToReleaseListExt_r13	*sCellToReleaseListSCG_Ext_r13	/* OPTIONAL */;
		struct SCellToAddModListExt_r13	*sCellToAddModListSCG_Ext_r13	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SCG_ConfigPartSCG_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SCG_ConfigPartSCG_r12;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RadioResourceConfigDedicatedSCG-r12.h"
#include "SCellToReleaseList-r10.h"
#include "PSCellToAddMod-r12.h"
#include "SCellToAddModList-r10.h"
#include "MobilityControlInfoSCG-r12.h"
#include "SCellToReleaseListExt-r13.h"
#include "SCellToAddModListExt-r13.h"

#endif	/* _SCG_ConfigPartSCG_r12_H_ */
#include <asn_internal.h>
