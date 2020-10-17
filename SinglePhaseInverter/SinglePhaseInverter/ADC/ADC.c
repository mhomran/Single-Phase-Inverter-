/*
 * ADC.c
 *
 * Created: 10/17/2020 10:25:50 AM
 *  Author: Mohamed_Hassanin
 */ 

#include <avr/io.h>

void 
ADC_Init(void)
{
	ADMUX = 0;
	ADCSRA = 0;
	ADCSRB = 0;
	
	//AVCC with external capacitor at AREF pin
	ADMUX |= 1 << REFS0;
	//start conversion at Timer1 Overflow (every 1 ms) 
	ADCSRA |= 1 << ADATE;
	ADCSRB |= 1 << ADTS1 | 1 << ADTS2;
	//set ADC prescaler 16
	ADCSRA |= 1 << ADPS2;
	//enable ADC
	ADCSRA |= 1 << ADEN;
}