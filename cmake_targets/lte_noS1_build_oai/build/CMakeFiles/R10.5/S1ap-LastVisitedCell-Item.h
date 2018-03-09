/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/thomas/lwa_ue_working/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_S1ap_LastVisitedCell_Item_H_
#define	_S1ap_LastVisitedCell_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1ap-LastVisitedEUTRANCellInformation.h"
#include "S1ap-LastVisitedUTRANCellInformation.h"
#include "S1ap-LastVisitedGERANCellInformation.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1ap_LastVisitedCell_Item_PR {
	S1ap_LastVisitedCell_Item_PR_NOTHING,	/* No components present */
	S1ap_LastVisitedCell_Item_PR_e_UTRAN_Cell,
	S1ap_LastVisitedCell_Item_PR_uTRAN_Cell,
	S1ap_LastVisitedCell_Item_PR_gERAN_Cell,
	/* Extensions may appear below */
	
} S1ap_LastVisitedCell_Item_PR;

/* S1ap-LastVisitedCell-Item */
typedef struct S1ap_LastVisitedCell_Item {
	S1ap_LastVisitedCell_Item_PR present;
	union S1ap_LastVisitedCell_Item_u {
		S1ap_LastVisitedEUTRANCellInformation_t	 e_UTRAN_Cell;
		S1ap_LastVisitedUTRANCellInformation_t	 uTRAN_Cell;
		S1ap_LastVisitedGERANCellInformation_t	 gERAN_Cell;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1ap_LastVisitedCell_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_LastVisitedCell_Item;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_LastVisitedCell_Item_H_ */
#include <asn_internal.h>
