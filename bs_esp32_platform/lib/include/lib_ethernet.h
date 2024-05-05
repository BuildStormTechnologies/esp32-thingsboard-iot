/**
* \copyright Copyright (c) 2019-2024, Buildstorm Pvt Ltd
*
* \file lib_ethernet.h
* \brief Wifi library header file.
*
*
* The Wifi library handles the ethernet operations.
*
* The libraries have been tested on the ESP32 modules.
* Buildstorm explicitly denies responsibility for any hardware failures
* arising from the use of these libraries, whether directly or indirectly.

*
* EULA LICENSE:
* This library is licensed under end user license EULA agreement.
* The EULA is available at https://buildstorm.com/eula/
* For any support contact us at hello@buildstorm.com
*
*/

#ifndef _LIB_ETHERNET_H_
#define _LIB_ETHERNET_H_

/* Includes ------------------------------------------------------------------*/

#include "lib_config.h"
#include "lib_utils.h"

/* Macros -----------------------------------------------------------------*/

/**
 * @enum wifiStates_et
 * An enum to represnet WiFi states
 */
typedef enum
{
    STATE_ETHERNET_IDLE,                    /*!< Idle state */
    STATE_ETHERNET_START,                   /*!< Start ETHERNET */
    STATE_ETHERNET_DISCONNECTED,            /*!< ETHERNET disconnected */
    STATE_ETHERNET_CONNECTED,               /*!< ETHERNET connected */
    STATE_ETHERNET_MAX,                     /*!< MAX ETHERNET state */
} ethernetStates_et;

/**
 * @brief WiFi credentials
 */
typedef struct
{
    uint32_t spiFreq_u32;
    int8_t mosi_s8;
    int8_t miso_s8;
    int8_t sck_s8;
    int8_t cs_s8;
    int8_t reset_s8;
    int8_t intr_s8;
    int8_t valid_u8;
} ethernetConfig_st;

/* Function declarations ----------------------------------------------------*/

/**
 * @brief Check if WiFi is connected.
 * @param none
 * @returns WiFi connection status
 * @retval true if connected
 * @retval false if not connected
 */
bool ETHERNET_isConnected();
bool NW_isConnected();

/**
 * @brief Get the IP address.
 * @param none
 * @returns IP address as string
 */
char *ETHERNET_getIpAddress();


/**
 * @brief Get WiFi state as string.
 * @param none
 * @returns WiFi state as string.
 * @retval "IDLE" - for STATE_ETHERNET_IDLE
 * @retval "START" - for STATE_ETHERNET_START
 * @retval "DISCONNECTED" - for STATE_ETHERNET_DISCONNECTED
 * @retval "CONNECTED" - for STATE_ETHERNET_CONNECTED
 */
const char *ETHERNET_getStateString();

#endif //_LIB_WIFI_H_