/*******************************************************************************
* File Name: cycfg_peripherals.c
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

#include "cycfg_peripherals.h"

#define CY_TCPWM_INPUT_DISABLED 7

const cy_stc_scb_uart_config_t UART_cfg = 
{
	.uartMode = CY_SCB_UART_STANDARD,
	.enableMutliProcessorMode = false,
	.smartCardRetryOnNack = false,
	.irdaInvertRx = false,
	.irdaEnableLowPowerReceiver = false,
	.oversample = 8,
	.enableMsbFirst = false,
	.dataWidth = 8UL,
	.parity = CY_SCB_UART_PARITY_NONE,
	.stopBits = CY_SCB_UART_STOP_BITS_1,
	.enableInputFilter = false,
	.breakWidth = 11UL,
	.dropOnFrameError = false,
	.dropOnParityError = false,
	.receiverAddress = 0x0UL,
	.receiverAddressMask = 0x0UL,
	.acceptAddrInFifo = false,
	.enableCts = false,
	.ctsPolarity = CY_SCB_UART_ACTIVE_LOW,
	.rtsRxFifoLevel = 0UL,
	.rtsPolarity = CY_SCB_UART_ACTIVE_LOW,
	.rxFifoTriggerLevel = 63UL,
	.rxFifoIntEnableMask = 0UL,
	.txFifoTriggerLevel = 63UL,
	.txFifoIntEnableMask = 0UL,
};
const cy_stc_tcpwm_pwm_config_t PWM_cfg = 
{
	.pwmMode = CY_TCPWM_PWM_MODE_PWM,
	.clockPrescaler = CY_TCPWM_PWM_PRESCALER_DIVBY_1,
	.pwmAlignment = CY_TCPWM_PWM_LEFT_ALIGN,
	.deadTimeClocks = 0,
	.runMode = CY_TCPWM_PWM_CONTINUOUS,
	.period0 = 1000,
	.period1 = 32768,
	.enablePeriodSwap = false,
	.compare0 = 500,
	.compare1 = 16384,
	.enableCompareSwap = false,
	.interruptSources = CY_TCPWM_INT_NONE,
	.invertPWMOut = CY_TCPWM_PWM_INVERT_DISABLE,
	.invertPWMOutN = CY_TCPWM_PWM_INVERT_DISABLE,
	.killMode = CY_TCPWM_PWM_STOP_ON_KILL,
	.swapInputMode = CY_TCPWM_INPUT_DISABLED & 0x3U,
	.swapInput = CY_TCPWM_INPUT_CREATOR,
	.reloadInputMode = CY_TCPWM_INPUT_DISABLED & 0x3U,
	.reloadInput = CY_TCPWM_INPUT_CREATOR,
	.startInputMode = CY_TCPWM_INPUT_DISABLED & 0x3U,
	.startInput = CY_TCPWM_INPUT_CREATOR,
	.killInputMode = CY_TCPWM_INPUT_DISABLED & 0x3U,
	.killInput = CY_TCPWM_INPUT_CREATOR,
	.countInputMode = CY_TCPWM_INPUT_DISABLED & 0x3U,
	.countInput = CY_TCPWM_INPUT_CREATOR,
};


void init_cycfg_peripherals(void)
{
	Cy_SysClk_PeriphAssignDivider(PCLK_SCB5_CLOCK, CY_SYSCLK_DIV_8_BIT, 0u);

	Cy_SysClk_PeriphAssignDivider(PCLK_TCPWM0_CLOCKS3, CY_SYSCLK_DIV_16_BIT, 0u);
}
