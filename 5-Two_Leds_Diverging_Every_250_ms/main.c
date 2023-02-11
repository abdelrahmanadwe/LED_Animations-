/*
 * main.c
 *
 *  Created on: Feb 10, 2023
 *      Author: AbdAlrahman
 */


#include "..\AVR_ATMega32-Drivers\03-LIB\STD_TYPES.h"
#include "..\AVR_ATMega32-Drivers\03-LIB\BIT_MATH.h"

#include "..\AVR_ATMega32-Drivers\01-MCAL\01-DIO\DIO_interface.h"
#include"..\AVR_ATMega32-Drivers\02-HAL\01-LED\LED_interface.h"

void main()
{

	LED_voidPortInit ( LED_PORTA );

	while(1)
	{

		LED_voidDiverge ( LED_PORTA , ACTIVE_HIGH , 250/1000.0 );
	}

}




