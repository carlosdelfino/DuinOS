/*
 * xmem.h
 *
 *  Created on: 15/03/2013
 *      Author: extracbd
 */

#ifndef XMEM_H_
#define XMEM_H_


#if defined(__AVR_ATmega2560__) || defined(__AVR_ATmega1280__)

void XMEM_init(void);

#else
#error "This header can only be used with ATmega2560 and ATmega1280"
#endif

#endif /* XMEM_H_ */
