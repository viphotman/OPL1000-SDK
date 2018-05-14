/******************************************************************************
*  Copyright 2017 - 2018, Opulinks Technology Ltd.
*  ---------------------------------------------------------------------------
*  Statement:
*  ----------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of Opulinks Technology Ltd. (C) 2018
******************************************************************************/

#ifndef _WIFI_MAC_DATA_H_
#define _WIFI_MAC_DATA_H_

#include "utils/wifi_common.h"
#include "ieee80211_crypto.h"

s32 rx_data_frame_sim(u8 *pframe, u16 mpdu_len); //for simulator
s32 rx_data_frame_impl(u8 *data, u16 data_len);
s32 ieee80211_rx_frame_impl(u8 *data, u16 len);

int wifi_mac_xmit_eapol_frame_impl(u8 *buf, size_t len, const u8 *eth_dest, u16 proto);
u32 wifi_mac_xmit_frame_impl(u8 *tx_data, u32 tx_data_len);
int ieee80211_tx_select_key_impl(ieee80211_key *key, u8 *data, u16 len);
int ieee80211_get_hdrlen_impl(u16 fc);
s32 ieee80211_xmit_frame_impl(u8 *tx_data, int tx_data_len);

/* Interface initial function */
void wifi_mac_txdata_func_init(void);
void wifi_mac_rxdata_func_init(void);


/* Rom patch interface */
typedef int (*ieee80211_is_eapol_frame_fp_t)(u8 *data, u16 len, u16 hdrlen);
typedef int (*ieee80211_rx_select_key_fp_t)(ieee80211_key *key, u8 *data, u16 len);
typedef s32 (*ieee80211_rx_frame_fp_t)(u8 *data, u16 len);
typedef void (*wifi_rx_data_eapol_fp_t)(u8 *buf, u16 len);
typedef void (*rx_data_eapol_fp_t)(const u8 *dst, const u8 *src, const u8 *data, size_t len, int prot);
typedef s32  (*rx_data_frame_fp_t)(u8 *pframe, u16 mpdu_len);

typedef u32 (*wifi_mac_xmit_frame_fp_t)(u8 *tx_data, u32 tx_data_len);
typedef int (*wifi_mac_xmit_eapol_frame_fp_t)(u8 *buf, size_t len, const u8 *eth_dest, u16 proto);
typedef s32 (*ieee80211_xmit_frame_fp_t)(u8 *tx_data, int tx_data_len);
typedef int (*ieee80211_tx_select_key_fp_t)(ieee80211_key *key, u8 *data, u16 len);
typedef int (*ieee80211_get_hdrlen_fp_t)(u16 fc);


/* Export interface funtion pointer */
extern ieee80211_is_eapol_frame_fp_t ieee80211_is_eapol_frame;
extern ieee80211_rx_frame_fp_t ieee80211_rx_frame;
extern ieee80211_rx_select_key_fp_t ieee80211_rx_select_key;
extern wifi_rx_data_eapol_fp_t wifi_rx_data_eapol;
extern rx_data_eapol_fp_t rx_data_eapol;
extern rx_data_frame_fp_t rx_data_frame;

extern wifi_mac_xmit_frame_fp_t wifi_mac_xmit_frame;
extern wifi_mac_xmit_eapol_frame_fp_t wifi_mac_xmit_eapol_frame;
extern ieee80211_xmit_frame_fp_t ieee80211_xmit_frame;
extern ieee80211_tx_select_key_fp_t ieee80211_tx_select_key;
extern ieee80211_get_hdrlen_fp_t ieee80211_get_hdrlen;

#endif