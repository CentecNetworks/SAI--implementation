/**
 @file ctc_sai_neighbor.h

  @author  Copyright (C) 2018 Centec Networks Inc.  All rights reserved.

 @date 2018-02-1

 @version v2.0

\p
 This module defines SAI Neighbor.
\b
\p
 The Neighbor Module APIs supported by centec devices:
\p
\b
\t  |   API                                             |   SUPPORT CHIPS LIST   |
\t  |  create_neighbor_entry                            |    CTC8096,CTC7148     |
\t  |  remove_neighbor_entry                            |    CTC8096,CTC7148     |
\t  |  set_neighbor_entry_attribute                     |    CTC8096,CTC7148     |
\t  |  get_neighbor_entry_attribute                     |    CTC8096,CTC7148     |
\t  |  remove_all_neighbor_entries                      |    CTC8096,CTC7148     |
\b
\p
 The Neighbor attributes supported by centec devices:
\p
\b
\t  |   ATTRIBUTE                                       |   SUPPORT CHIPS LIST   |
\t  |  SAI_NEIGHBOR_ENTRY_ATTR_DST_MAC_ADDRESS          |    CTC8096,CTC7148     |
\t  |  SAI_NEIGHBOR_ENTRY_ATTR_PACKET_ACTION            |    CTC8096,CTC7148     |
\t  |  SAI_NEIGHBOR_ENTRY_ATTR_USER_TRAP_ID             |           -     |
\t  |  SAI_NEIGHBOR_ENTRY_ATTR_NO_HOST_ROUTE            |    CTC8096,CTC7148     |
\t  |  SAI_NEIGHBOR_ENTRY_ATTR_META_DATA                |           -            |
\b

*/

#ifndef _CTC_SAI_NEIGHBOR_H
#define _CTC_SAI_NEIGHBOR_H


#include "ctc_sai.h"
#include "sal.h"
#include "ctcs_api.h"
/*don't need include other header files*/


extern sai_status_t
ctc_sai_neighbor_api_init();
extern sai_status_t
ctc_sai_neighbor_db_init(uint8 lchip);
extern sai_status_t
ctc_sai_neighbor_db_deinit(uint8 lchip);
extern sai_status_t
ctc_sai_neighbor_alloc_ipuc_nexthop(uint8 lchip, sai_object_id_t rif_id, sai_ip_address_t* ip_address, uint32* nh_id);
extern sai_status_t
ctc_sai_neighbor_free_ipuc_nexthop(uint8 lchip, sai_object_id_t rif_id, sai_ip_address_t* ip_address, uint32 nh_id);
extern sai_status_t
ctc_sai_neighbor_get_arp_id(uint8 lchip, sai_object_id_t rif_id, sai_ip_address_t* ip_address, uint16* ctc_arp_id);
extern sai_status_t
ctc_sai_neighbor_get_outgoing_param(uint8 lchip, sai_object_id_t rif_id, sai_ip_address_t* ip_address, uint32* gport, sai_mac_t mac);
extern sai_status_t
ctc_sai_neighbor_binding_next_hop(uint8 lchip, sai_object_id_t rif_id, sai_ip_address_t* ip_address, sai_object_id_t next_hop_id);
extern sai_status_t
ctc_sai_neighbor_unbinding_next_hop(uint8 lchip, sai_object_id_t rif_id, sai_ip_address_t* ip_address, sai_object_id_t next_hop_id);
extern sai_status_t
ctc_sai_neighbor_update_arp(uint8 lchip, const sai_fdb_entry_t* fdb_entry, uint8 is_remove, uint8 is_flush);
extern void
ctc_sai_neighbor_dump(uint8 lchip, sal_file_t p_file, ctc_sai_dump_grep_param_t *dump_grep_param);

#endif /*_CTC_SAI_NEIGHBOR_H*/

