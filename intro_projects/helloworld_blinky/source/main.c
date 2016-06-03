/*
 * Copyright (c) 2016 - Michael Norman
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of Freescale Semiconductor, Inc. nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "board.h"

/*!
 * @brief my LED configuration structure
 */
typedef struct _led_config
{
    gpio_pin_config_t config; /*!< GPIO config structure */
    GPIO_Type *       base;   /*!< GPIO peripheral base pointer */
    uint32_t          pin;    /*!< GPIO pin number */
} led_config_t;

/*!
 * @brief a simple delay loop
 */ 
static void delay (uint32_t nops)
{
    int i = nops; 

    while (--i)
        __asm("NOP");
}

/*!
 * @brief Application entry point.
 */
int main(void)
{
	/* Define my LEDs */
    led_config_t RedLED = { {kGPIO_DigitalOutput, 1U}, GPIOB, 22U};
    led_config_t BlueLED = { {kGPIO_DigitalOutput, 1U}, GPIOB, 21U};
    led_config_t GreenLED = { {kGPIO_DigitalOutput, 1U}, GPIOE, 26U};
    
    /* Ramp up the clock to full-speed run (120MHz) */
    BOARD_BootClockRUN();

    /* Initialize the console and LED pins */
    BOARD_InitPins();

    /* Initizliaze the debug console */
    BOARD_InitDebugConsole();

    /* Send a proof-of-life message out to the console */
    PRINTF("Blinky, Blinky!\r\n");

    /* Initialize the GPIOs connected to the LEDs */
    GPIO_PinInit(RedLED.base, RedLED.pin, &(RedLED.config));
    GPIO_PinInit(BlueLED.base, BlueLED.pin, &(BlueLED.config));
    GPIO_PinInit(GreenLED.base, GreenLED.pin, &(GreenLED.config));
    
    /* Blinky, Blinky */
    for (;;)
    {
        GPIO_TogglePinsOutput(BlueLED.base, (1 << BlueLED.pin));
        delay(5000000);
        GPIO_TogglePinsOutput(RedLED.base, (1 << RedLED.pin));
        delay(5000000);
        GPIO_TogglePinsOutput(GreenLED.base, (1 << GreenLED.pin));
        delay(5000000);
        GPIO_TogglePinsOutput(BlueLED.base, (1 << BlueLED.pin));
        delay(5000000);
        GPIO_TogglePinsOutput(RedLED.base, (1 << RedLED.pin));
        delay(5000000);
        GPIO_TogglePinsOutput(GreenLED.base, (1 << GreenLED.pin));
        delay(5000000);
    }
}
