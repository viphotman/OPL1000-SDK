/******************************************************************************
*  Copyright 2017 - 2018, Opulinks Technology Ltd.
*  ----------------------------------------------------------------------------
*  Statement:
*  ----------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of Opulinks Technology Ltd. (C) 2018
******************************************************************************/

#include "hal_vic.h"

typedef enum
{
	PS_WAKEUP_TYPE_IO,		/**< Wakeup by external IO of pre-defined */
	PS_WAKEUP_TYPE_TIMEOUT  /**< Wakeup by timer timeout */

} PS_WAKEUP_TYPE;

typedef void (*PS_WAKEUP_CALLBACK)(PS_WAKEUP_TYPE);

/*
* @brief Configure external input for system wakeup from sleep
*
* @param [in] ext_io_num The number of external input used for wakeup
*
* @param [in] ext_io_type The trigger type for external input
*
*/
void ps_set_wakeup_io(E_GpioIdx_t ext_io_num, E_ItrType_t ext_io_type);

/*
* @brief Set callback witch invoked at system wakeup
*
* @param [in] callback User defined wakeup callback function
*
*/
void ps_set_wakeup_cb(PS_WAKEUP_CALLBACK callback);

/*
* @brief Enable Deep Sleep: system will go sleep until external input triggered
*
*/
void ps_deep_sleep(void);

/*
* @brief Enable Timer Sleep: system will go sleep until timer timeout or external input triggered
*
* @param [in] sleep_duration_ms Timer timeout value unit in millisecond
*
*/
void ps_timer_sleep(uint32_t sleep_duration_ms);

/*
* @brief Enable Smart Sleep: system will go sleep automatically if system in idle during connection time. Smart sleep disabled when external input triggered.<br/>
* Define that what causes "if system in idle during connection time"<br/>
*   - WiFi connection is exists<br/>
*   - BLE advertising is enabled<br/>
*	- BLE connection is exists<br/>
*
* @param [in] sleep_duration_ms Timer timeout value unit in millisecond
*
*/
void ps_smart_sleep(int enable);