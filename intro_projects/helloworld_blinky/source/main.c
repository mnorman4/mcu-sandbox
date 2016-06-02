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
#include "fsl_gpio.h"

/*!
 * @brief Application entry point.
 */
int main(void)
{
    gpio_pin_config_t BlueLED;

    /* Init board hardware. */
    BOARD_BootClockRUN();
    BOARD_InitPins();
    BOARD_InitDebugConsole();

    /* Send a proof-of-life message out to the console */
    PRINTF("Blinky, Blinky!\r\n");

    /* Initialize the GPIO connected to the BLUE LED */
    BlueLED.pinDirection = kGPIO_DigitalOutput;
    BlueLED.outputLogic  = 1;
    GPIO_PinInit(GPIOB, 21, &BlueLED);

    /* Toggle forever */
    for (;;)
    {
        int i = 10000000;
        while (--i)
        {
            __asm("NOP");
        }

        GPIO_TogglePinsOutput(GPIOB, (1 << 21));
    }
}
