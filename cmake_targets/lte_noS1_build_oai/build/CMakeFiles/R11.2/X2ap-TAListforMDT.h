/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/thomas/lwa_ue_working/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_X2ap_TAListforMDT_H_
#define	_X2ap_TAListforMDT_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2ap-TAC.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* X2ap-TAListforMDT */
typedef struct X2ap_TAListforMDT {
	A_SEQUENCE_OF(X2ap_TAC_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2ap_TAListforMDT_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2ap_TAListforMDT;

#ifdef __cplusplus
}
#endif

#endif	/* _X2ap_TAListforMDT_H_ */
#include <asn_internal.h>
