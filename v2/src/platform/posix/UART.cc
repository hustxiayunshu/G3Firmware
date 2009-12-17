/*
 * UART.cc
 *
 *  Created on: Dec 10, 2009
 *      Author: phooky
 */
#include "util/UART.hh"
#include "util/DebugPin.hh"
#include <Platform.hh>
#include <stdint.h>

UART uart[0] = {};

UART::UART(uint8_t index) : index_(index), enabled_(false) {}

/// Subsequent bytes will be triggered by the tx complete interrupt.
void UART::beginSend() {}

void UART::enable(bool enabled) {
	enabled_ = enabled;
}

