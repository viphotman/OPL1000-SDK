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

#ifndef __TCP_CLIENT_H__
#define __TCP_CLIENT_H__

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

#define WIFI_SSID               "Opulinks-TEST-AP"
#define  WIFI_PASSWORD    "1234abcd" 

#define  TCP_SERVER_ADDR    "192.168.43.80" 
#define  TCP_SERVER_PORT    8181
	
#define MAC2STR(a) (a)[0], (a)[1], (a)[2], (a)[3], (a)[4], (a)[5]
#define MACSTR "%02x:%02x:%02x:%02x:%02x:%02x"

void WifiAppInit(void);

#ifdef __cplusplus
}
#endif

#endif /* __TCP_CLIENT_H__ */
