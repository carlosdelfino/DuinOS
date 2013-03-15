/*
 * xmem.c
 *
 *  Created on: 15/03/2013
 *      Author: extracbd
 */

#include "xmem.h"
#include "avr/io.h"

void XMEM_init(void) {
// External memory interface enable
	MCUCR |= (1 << SRE);
	XMCRA = 0;
//PC7..PC5 released pins
	XMCRB |= (1 << XMM1) | (1 << XMM0);
}

