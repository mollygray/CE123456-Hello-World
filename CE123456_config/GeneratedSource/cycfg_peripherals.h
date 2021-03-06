/*******************************************************************************
* File Name: cycfg_peripherals.h
*
* Description:
* Peripheral Hardware Block configuration
* This file should not be modified. It was automatically generated by 
* ModusToolbox 1.0.0
* 
********************************************************************************
* Copyright (c) 2017-2018 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#if !defined(CYCFG_PERIPHERALS_H)
#define CYCFG_PERIPHERALS_H

#include "notices.h"
#include "cy_scb_uart.h"
#include "cy_sysclk.h"
#include "cy_tcpwm_pwm.h"

#if defined(__cplusplus)
extern "C" {
#endif

extern const cy_stc_scb_uart_config_t UART_cfg;
extern const cy_stc_tcpwm_pwm_config_t PWM_cfg;

void init_cycfg_peripherals(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PERIPHERALS_H */
