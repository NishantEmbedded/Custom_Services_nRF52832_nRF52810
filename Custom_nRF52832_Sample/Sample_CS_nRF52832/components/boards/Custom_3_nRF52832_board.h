/**
 * Copyright (c) 2014 - 2021, Nordic Semiconductor ASA
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form, except as embedded into a Nordic
 *    Semiconductor ASA integrated circuit in a product or a software update for
 *    such product, must reproduce the above copyright notice, this list of
 *    conditions and the following disclaimer in the documentation and/or other
 *    materials provided with the distribution.
 *
 * 3. Neither the name of Nordic Semiconductor ASA nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * 4. This software, with or without modification, must only be used with a
 *    Nordic Semiconductor ASA integrated circuit.
 *
 * 5. Any software provided in binary form under this license must not be reverse
 *    engineered, decompiled, modified and/or disassembled.
 *
 * THIS SOFTWARE IS PROVIDED BY NORDIC SEMICONDUCTOR ASA "AS IS" AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY, NONINFRINGEMENT, AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL NORDIC SEMICONDUCTOR ASA OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 * GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */
#ifndef CUSTOM_H
#define CUSTOM_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "nrf_gpio.h"

// LEDs definitions for CUSTOM
#define LEDS_NUMBER 3

#define LED_START 28
#define LED_1 29
#define LED_2 28
#define LED_3 30
#define LED_STOP 30

#define LEDS_ACTIVE_STATE 1

#define LEDS_INV_MASK LEDS_MASK

#define LEDS_LIST           \
    {                       \
        LED_1, LED_2, LED_3 \
    }

#define BSP_LED_0 LED_1
#define BSP_LED_1 LED_2
#define BSP_LED_2 LED_3

#define BUTTONS_NUMBER 2

#define BUTTON_START 3
#define BUTTON_1 3
#define BUTTON_2 10
#define BUTTON_STOP 10
#define BUTTON_PULL NRF_GPIO_PIN_PULLUP

#define BUTTONS_ACTIVE_STATE 0

#define BUTTONS_LIST       \
    {                      \
        BUTTON_1, BUTTON_2 \
    }

#define BSP_BUTTON_0 BUTTON_1
#define BSP_BUTTON_1 BUTTON_2

#define RX_PIN_NUMBER 8
#define TX_PIN_NUMBER 6

// CUSTOM Board Pins
#define TWI_SCL_PIN 12 // SCL signal pin
#define TWI_SDA_PIN 16 // SDA signal pin
#define BATTERY_VOLTAGE_PIN NRF_SAADC_INPUT_AIN7
#define BUZZER_PIN 5
#define HALL_SENSOR_EN 9

#ifdef __cplusplus
}
#endif

#endif // CUSTOM_H
