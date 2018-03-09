/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/thomas/lwa_ue_working/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_S1ap_CauseNas_H_
#define	_S1ap_CauseNas_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1ap_CauseNas {
	S1ap_CauseNas_normal_release	= 0,
	S1ap_CauseNas_authentication_failure	= 1,
	S1ap_CauseNas_detach	= 2,
	S1ap_CauseNas_unspecified	= 3,
	/*
	 * Enumeration is extensible
	 */
	S1ap_CauseNas_csg_subscription_expiry	= 4
} e_S1ap_CauseNas;

/* S1ap-CauseNas */
typedef long	 S1ap_CauseNas_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_CauseNas;
asn_struct_free_f S1ap_CauseNas_free;
asn_struct_print_f S1ap_CauseNas_print;
asn_constr_check_f S1ap_CauseNas_constraint;
ber_type_decoder_f S1ap_CauseNas_decode_ber;
der_type_encoder_f S1ap_CauseNas_encode_der;
xer_type_decoder_f S1ap_CauseNas_decode_xer;
xer_type_encoder_f S1ap_CauseNas_encode_xer;
per_type_decoder_f S1ap_CauseNas_decode_uper;
per_type_encoder_f S1ap_CauseNas_encode_uper;
per_type_decoder_f S1ap_CauseNas_decode_aper;
per_type_encoder_f S1ap_CauseNas_encode_aper;
type_compare_f     S1ap_CauseNas_compare;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_CauseNas_H_ */
#include <asn_internal.h>
