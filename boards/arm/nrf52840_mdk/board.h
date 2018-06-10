/*
 * Copyright (c) 2018 makerdiary.com
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __INC_BOARD_H
#define __INC_BOARD_H

#include <soc.h>

/* Push button switch 0 */
#define SW0_GPIO_PIN     0
#define SW0_GPIO_NAME    CONFIG_GPIO_NRF5_P1_DEV_NAME
#define SW0_GPIO_PIN_PUD GPIO_PUD_PULL_UP

/* Onboard GREEN LED 0 */
#define LED0_GPIO_PIN  22
#define LED0_GPIO_PORT CONFIG_GPIO_NRF5_P0_DEV_NAME

/* Onboard RED LED 1 */
#define LED1_GPIO_PIN  23
#define LED1_GPIO_PORT CONFIG_GPIO_NRF5_P0_DEV_NAME

/* Onboard BLUE LED 2 */
#define LED2_GPIO_PIN  24
#define LED2_GPIO_PORT CONFIG_GPIO_NRF5_P0_DEV_NAME


#endif /* __INC_BOARD_H */
