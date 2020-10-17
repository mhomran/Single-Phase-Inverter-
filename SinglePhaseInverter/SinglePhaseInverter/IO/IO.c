/*
 * IO.c
 *
 * Created: 10/17/2020 8:42:12 AM
 *  Author: Mohamed_Hassanin
 */
#include <avr/io.h> 
#include "IO.h"
#include "../PCBAL.h"

void 
IO_Init(void)
{
	HIGH_SIDE_A_MODER |= 1 << HIGH_SIDE_A_PIN;
	HIGH_SIDE_B_MODER |= 1 << HIGH_SIDE_B_PIN;
	HIGH_SIDE_A_ODR &= ~(1 << HIGH_SIDE_A_PIN);
	HIGH_SIDE_B_ODR &= ~(1 << HIGH_SIDE_B_PIN);
}