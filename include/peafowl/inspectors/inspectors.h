/*
 * inspectors.h
 *
 *  Created on: 23/09/2012
 *
 * =========================================================================
 *  Copyright (C) 2012-2013, Daniele De Sensi (d.desensi.software@gmail.com)
 *
 *  This file is part of Peafowl.
 *
 *  Peafowl is free software: you can redistribute it and/or
 *  modify it under the terms of the Lesser GNU General Public
 *  License as published by the Free Software Foundation, either
 *  version 3 of the License, or (at your option) any later version.

 *  Peafowl is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  Lesser GNU General Public License for more details.
 *
 *  You should have received a copy of the Lesser GNU General Public
 *  License along with Peafowl.
 *  If not, see <http://www.gnu.org/licenses/>.
 *
 * =========================================================================
 */

#ifndef INSPECTORS_H_
#define INSPECTORS_H_
#include <arpa/inet.h>
#include <netinet/in.h>
#include <stdint.h>
#include <sys/types.h>
#include <peafowl/peafowl.h>
#include <peafowl/flow_table.h>
#include "protocols_identifiers.h"

uint8_t check_dhcp(dpi_library_state_t* state, dpi_pkt_infos_t* pkt,
                   const unsigned char* app_data, uint32_t data_length,
                   dpi_tracking_informations_t* t);
uint8_t check_dhcpv6(dpi_library_state_t* state, dpi_pkt_infos_t* pkt,
                     const unsigned char* app_data, uint32_t data_length,
                     dpi_tracking_informations_t* t);
uint8_t check_bgp(dpi_library_state_t* state, dpi_pkt_infos_t* pkt,
                  const unsigned char* app_data, uint32_t data_length,
                  dpi_tracking_informations_t* t);
uint8_t check_dns(dpi_library_state_t* state, dpi_pkt_infos_t* pkt,
                  const unsigned char* app_data, uint32_t data_length,
                  dpi_tracking_informations_t* t);
uint8_t check_mdns(dpi_library_state_t* state, dpi_pkt_infos_t* pkt,
                   const unsigned char* app_data, uint32_t data_length,
                   dpi_tracking_informations_t* t);
uint8_t check_ntp(dpi_library_state_t* state, dpi_pkt_infos_t* pkt,
                  const unsigned char* app_data, uint32_t data_length,
                  dpi_tracking_informations_t* t);

uint8_t check_http(dpi_library_state_t* state, dpi_pkt_infos_t* pkt,
                   const unsigned char* app_data, uint32_t data_length,
                   dpi_tracking_informations_t* t);
uint8_t check_sip(dpi_library_state_t* state, dpi_pkt_infos_t* pkt,
                  const unsigned char* app_data, uint32_t data_length,
                  dpi_tracking_informations_t* t);
uint8_t check_skype(dpi_library_state_t* state, dpi_pkt_infos_t* pkt,
                    const unsigned char* app_data, uint32_t data_length,
                    dpi_tracking_informations_t* t);
uint8_t check_rtp(dpi_library_state_t* state, dpi_pkt_infos_t* pkt,
                  const unsigned char* app_data, uint32_t data_length,
                  dpi_tracking_informations_t* t);
uint8_t check_ssh(dpi_library_state_t* state, dpi_pkt_infos_t* pkt,
                  const unsigned char* app_data, uint32_t data_length,
                  dpi_tracking_informations_t* t);
uint8_t check_smtp(dpi_library_state_t* state, dpi_pkt_infos_t* pkt,
                   const unsigned char* app_data, uint32_t data_length,
                   dpi_tracking_informations_t* t);
uint8_t check_pop3(dpi_library_state_t* state, dpi_pkt_infos_t* pkt,
                   const unsigned char* app_data, uint32_t data_length,
                   dpi_tracking_informations_t* t);
uint8_t check_ssl(dpi_library_state_t* state, dpi_pkt_infos_t* pkt,
                  const unsigned char* app_data, uint32_t data_length,
                  dpi_tracking_informations_t* t);
uint8_t check_hangout(dpi_library_state_t* state, dpi_pkt_infos_t* pkt,
                  const unsigned char* app_data, uint32_t data_length,
                  dpi_tracking_informations_t* t);
uint8_t check_whatsapp(dpi_library_state_t* state, dpi_pkt_infos_t* pkt,
                  const unsigned char* app_data, uint32_t data_length,
                  dpi_tracking_informations_t* t);
uint8_t check_telegram(dpi_library_state_t* state, dpi_pkt_infos_t* pkt,
                  const unsigned char* app_data, uint32_t data_length,
                  dpi_tracking_informations_t* t);
uint8_t check_imap(dpi_library_state_t* state, dpi_pkt_infos_t* pkt,
                  const unsigned char* app_data, uint32_t data_length,
                  dpi_tracking_informations_t* t);
uint8_t check_dropbox(dpi_library_state_t* state, dpi_pkt_infos_t* pkt,
                  const unsigned char* app_data, uint32_t data_length,
                  dpi_tracking_informations_t* t);
uint8_t check_spotify(dpi_library_state_t* state, dpi_pkt_infos_t* pkt,
                  const unsigned char* app_data, uint32_t data_length,
                  dpi_tracking_informations_t* t);

uint8_t invoke_callbacks_http(dpi_library_state_t* state, dpi_pkt_infos_t* pkt,
                              const unsigned char* app_data,
                              uint32_t data_length,
                              dpi_tracking_informations_t* tracking);
uint8_t invoke_callbacks_ssl(dpi_library_state_t* state, dpi_pkt_infos_t* pkt,
                             const unsigned char* app_data,
                             uint32_t data_length,
                             dpi_tracking_informations_t* tracking);
uint8_t invoke_callbacks_sip(dpi_library_state_t* state, dpi_pkt_infos_t* pkt,
                             const unsigned char* app_data,
                             uint32_t data_length,
                             dpi_tracking_informations_t* tracking);


#endif /* INSPECTORS_H_ */
