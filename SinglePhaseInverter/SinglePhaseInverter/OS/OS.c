/*
 * OS.c
 *
 * Created: 10/17/2020 8:18:44 AM
 *  Author: Mohamed_Hassanin
 */ 

#include <avr/io.h>
#include "OS.h"

void 
OS_Init(void)
{
	//Fast mode
	TCCR1A &= ~(1 << WGM10);
	TCCR1A |= 1 << WGM11;
	TCCR1B |= 1 << WGM12 | 1 << WGM13;
	//set autoreload value to get 1 KHz 
	ICR1 = 2000;
	//enable autoreload IRQ
	TIMSK1 |= 1 << TOIE1;
	//set prescaler 8
	TCCR1B |= 1 << CS11;
}