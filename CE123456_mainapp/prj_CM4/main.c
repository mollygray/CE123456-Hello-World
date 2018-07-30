/***************************************************************************//**
* \file main.c
* \version 1.0
*
* \brief
* Objective:
*    Empty starter design.
*
* Compatible Kits:
*    CY8CKIT-062-BLE
*    CY8CKIT-062-WIFI-BT
*
********************************************************************************
* \copyright
* Copyright 2017-2018, Cypress Semiconductor Corporation. All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "cy_device_headers.h"
 
#include "cycfg_platform.h"
#include "cycfg_clocks.h"
#include "cycfg_connectivity.h"
#include "cycfg_pins.h"
#include "cycfg_peripherals.h"
#include "stdio.h"
#include "stdio_user.h"

/* 
 Include this file if using peripherals: #include "cycfg_peripherals.h"
 Include this file if using CapSense: #include "cycfg_capsense.h"
 Include this file if using SMIF/QSPI: #include "cycfg_smif_memslot.h"
 Include this file if using USB device: #include "cycfg_usbdev.h"
*/

int main(void)
{
	cy_stc_scb_uart_context_t UART_context;
	char string[] = "Hello World! This is PSoC 6 MCU.\r\n";

	/* Configure platform resources */
	init_cycfg_platform();
	init_cycfg_clocks();
    /* Set up internal routing, pins, and clock-to-peripheral connections */
    init_connectivity();
    init_cycfg_pins();
    init_cycfg_peripherals();

    /*
      Execute this if using peripherals: init_cycfg_peripherals();
    */
    
    /* Initialize and enable the UART */
    Cy_SCB_UART_Init(SCB5, &UART_cfg, &UART_context);
    Cy_SCB_UART_Enable(SCB5);

    /* Initialize and trigger the TCPWM */
    Cy_TCPWM_PWM_Init(TCPWM0, 3UL, &PWM_cfg);
    Cy_TCPWM_PWM_Enable(TCPWM0, 3UL);
    Cy_TCPWM_TriggerStart(TCPWM0, 1UL << 3u);

    /* Print Hello World string to serial console */
    printf("%s", string);

    __enable_irq();
 
    for(;;)
    {
    }

    return(0);
}
