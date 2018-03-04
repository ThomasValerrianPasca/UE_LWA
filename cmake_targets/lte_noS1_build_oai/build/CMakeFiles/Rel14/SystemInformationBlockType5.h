/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_SystemInformationBlockType5_H_
#define	_SystemInformationBlockType5_H_


#include <asn_application.h>

/* Including external dependencies */
#include "InterFreqCarrierFreqList.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct InterFreqCarrierFreqList_v1250;
struct InterFreqCarrierFreqListExt_r12;
struct InterFreqCarrierFreqListExt_v1280;
struct InterFreqCarrierFreqList_v1310;
struct InterFreqCarrierFreqListExt_v1310;

/* SystemInformationBlockType5 */
typedef struct SystemInformationBlockType5 {
	InterFreqCarrierFreqList_t	 interFreqCarrierFreqList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	struct SystemInformationBlockType5__ext1 {
		struct InterFreqCarrierFreqList_v1250	*interFreqCarrierFreqList_v1250	/* OPTIONAL */;
		struct InterFreqCarrierFreqListExt_r12	*interFreqCarrierFreqListExt_r12	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct SystemInformationBlockType5__ext2 {
		struct InterFreqCarrierFreqListExt_v1280	*interFreqCarrierFreqListExt_v1280	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct SystemInformationBlockType5__ext3 {
		struct InterFreqCarrierFreqList_v1310	*interFreqCarrierFreqList_v1310	/* OPTIONAL */;
		struct InterFreqCarrierFreqListExt_v1310	*interFreqCarrierFreqListExt_v1310	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType5_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType5;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "InterFreqCarrierFreqList-v1250.h"
#include "InterFreqCarrierFreqListExt-r12.h"
#include "InterFreqCarrierFreqListExt-v1280.h"
#include "InterFreqCarrierFreqList-v1310.h"
#include "InterFreqCarrierFreqListExt-v1310.h"

#endif	/* _SystemInformationBlockType5_H_ */
#include <asn_internal.h>
