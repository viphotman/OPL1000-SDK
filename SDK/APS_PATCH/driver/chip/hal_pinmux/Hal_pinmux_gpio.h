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

#ifndef _PINMUX_GPIO__H_
#define _PINMUX_GPIO__H_

#include "OPL1000_pin_mux_define.h"
#include "Hal_pinmux_common.h"
#include "hal_vic.h"
#include "hal_vic_patch.h"

#define   LEV_HIGH       1
#define   LEV_LOW        0

/**
 * @brief  Pinmux gpio init    
 *
 * @param[in] the struct of gpio   
 * 
 * @return - 0: successful
 *         - other: failed              
 */
ERR_CODE Hal_Pinmux_Gpio_Init(T_OPL1000_Gpio *gpio);

#endif
