/*******************************************************************************
* File Name: cycfg_pins.h
*
* Description:
* Pin configuration
* This file should not be modified. It was automatically generated by 
* ModusToolbox 1.0.0
* 
********************************************************************************
* Copyright (c) 2017-2018 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#if !defined(CYCFG_PINS_H)
#define CYCFG_PINS_H

#include "notices.h"
#include "cy_gpio.h"
#include "cycfg_connectivity.h"

#if defined(__cplusplus)
extern "C" {
#endif

#define LED_PORT GPIO_PRT1
#define LED_PIN 1U
#define LED_NUM 1U
#define UART_RX_PORT GPIO_PRT5
#define UART_RX_PIN 0U
#define UART_RX_NUM 0U
#define UART_TX_PORT GPIO_PRT5
#define UART_TX_PIN 1U
#define UART_TX_NUM 1U
#define ioss_0__port_6__pin_4__PORT GPIO_PRT6
#define ioss_0__port_6__pin_4__PIN 4U
#define ioss_0__port_6__pin_4__NUM 4U
#define ioss_0__port_6__pin_6__PORT GPIO_PRT6
#define ioss_0__port_6__pin_6__PIN 6U
#define ioss_0__port_6__pin_6__NUM 6U
#define ioss_0__port_6__pin_7__PORT GPIO_PRT6
#define ioss_0__port_6__pin_7__PIN 7U
#define ioss_0__port_6__pin_7__NUM 7U

extern const cy_stc_gpio_pin_config_t LED_cfg;
extern const cy_stc_gpio_pin_config_t UART_RX_cfg;
extern const cy_stc_gpio_pin_config_t UART_TX_cfg;
extern const cy_stc_gpio_pin_config_t ioss_0__port_6__pin_4__cfg;
extern const cy_stc_gpio_pin_config_t ioss_0__port_6__pin_6__cfg;
extern const cy_stc_gpio_pin_config_t ioss_0__port_6__pin_7__cfg;

void init_cycfg_pins(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PINS_H */
