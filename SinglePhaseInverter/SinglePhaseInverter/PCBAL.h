/*
 * PCBAL.h
 *
 * Created: 10/17/2020 8:44:47 AM
 *  Author: Mohamed_Hassanin
 */ 

/*
						|								|						
						|								|
		HS_A	|					HS_B	|
						|								|
						|------LOAD-----|
						|								|
		LS_A	|					LS_B	|
						|								|
						|								|
*/

#ifndef PCBAL_H_
#define PCBAL_H_


#define HIGH_SIDE_A_ODR PORTB
#define HIGH_SIDE_B_ODR PORTB
#define HIGH_SIDE_A_MODER DDRB
#define HIGH_SIDE_B_MODER DDRB
#define HIGH_SIDE_A_PIN PIN1
#define HIGH_SIDE_B_PIN PIN2
#define HIGH_SIDE_A_PIN_ARDUINO 9
#define HIGH_SIDE_B_PIN_ARDUINO 10

#define LOW_SIDE_A_ODR PORTB
#define LOW_SIDE_B_ODR PORTB
#define LOW_SIDE_A_MODER DDRB
#define LOW_SIDE_B_MODER DDRB
#define LOW_SIDE_A_PIN PIN3
#define LOW_SIDE_B_PIN PIN4
#define LOW_SIDE_A_PIN_ARDUINO 11
#define LOW_SIDE_B_PIN_ARDUINO 12

#define DC_POTENTIOMETER ADC0

#endif /* PCBAL_H_ */