/*******************************************************************************
 * @file
 * @brief ble-configuration.h
 *******************************************************************************
 * # License
 * <b>Copyright 2018 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * The licensor of this software is Silicon Laboratories Inc. Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement. This
 * software is distributed to you in Source Code format and is governed by the
 * sections of the MSLA applicable to Source Code.
 *
 ******************************************************************************/

#ifndef __BLE_CONFIG__
#define __BLE_CONFIG__

// Top level macros
#define SILABS_AF_DEVICE_NAME "lock-example"

// Generated plugin macros

// Custom macros
#define BRD4161A 1

#ifdef EMBER_AF_BOARD_TYPE
#undef EMBER_AF_BOARD_TYPE
#endif
#define EMBER_AF_BOARD_TYPE BRD4161A

#endif // __BLE_CONFIG__