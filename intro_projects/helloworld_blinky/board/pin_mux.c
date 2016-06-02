/*
 * Copyright (c) 2016, Michael Norman
 * All rights reserved.
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

#include "fsl_common.h"
#include "fsl_port.h"
#include "fsl_debug_console.h"
#include "pin_mux.h"

/******************************************************************************/

void BOARD_InitPins(void)
{
    /* Enable needed PORTx clocks */
    CLOCK_EnableClock(kCLOCK_PortB);
    CLOCK_EnableClock(kCLOCK_PortE);

#if SDK_DEBUGCONSOLE
    /* Configure PTB16 for UART1_RX (OpenSDA serial port) */
    PORT_SetPinMux(PORTB, 16U, kPORT_MuxAlt3);
    /* Configure PTB17 for UART1_TX (OpenSDA serial port) */
    PORT_SetPinMux(PORTB, 17U, kPORT_MuxAlt3);
#endif /* SDK_DEBUGCONSOLE */

    /* Enable the on-board LEDs as simple GPIOs */
    PORT_SetPinMux(PORTB, 22U, kPORT_MuxAsGpio); /* Red */
    PORT_SetPinMux(PORTE, 26U, kPORT_MuxAsGpio); /* Green */
    PORT_SetPinMux(PORTB, 21U, kPORT_MuxAsGpio); /* Blue */
}
