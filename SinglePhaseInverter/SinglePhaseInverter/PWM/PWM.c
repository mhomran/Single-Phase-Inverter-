/*
 * PWM.c
 *
 * Created: 10/17/2020 8:32:27 AM
 *  Author: Mohamed_Hassanin
 */ 

#include <avr/io.h>
#include "PWM.h"

void 
PWM_Init(void)
{
	TCCR1A |= 1 << COM1A1 | 1 << COM1B1;
	OCR1A = 1000;
	OCR1B = 1000;
}

void
PWM_Deinit(void)
{
	TCCR1A &= ~(1 << COM1A1 | 1 << COM1B1);
}
