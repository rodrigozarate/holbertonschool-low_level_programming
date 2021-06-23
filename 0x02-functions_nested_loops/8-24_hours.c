/*
* File: 8-24_hours.c
* Auth: Rodrigo Zárate Algecira
* Date: Tuesday june 22 2021
*/

#include "holberton.h"

/**
* jack_bauer - Print minutes in one day
* Return: void
*/
void jack_bauer(void)
{

int h1;
int m1;

	for (h1 = 0; h1<=24; h1++)
	{
		for (m1 = 0; m1 < 60; m1++)
		{
			if (h1 < 10)
				{
				_putchar('0');
				_putchar(h1 + '0');
				}
			else if (h1 >= 10 && h1 < 20)
				{
				_putchar('1');
				int hour10 = h1 - 10;
				_putchar(hour10);	
				}
			else if (h1 >= 20; && < 30)
				{
				_putchar('2');
				int hour20 = h1 -20;
				_putchar(hour20);
				}
			_putchar(':');
			if (m1 < 10)
				{
				_putchar('0');
				_putchar(m1 + '0');
				}
			else if (m1 >=10 && m1 <20)
				{
				_putchar('1');
				int minute10 = m1 - 10;
				_putchar(minute10);
				}
			else if (m1 >=20 && m1 <30)
                                {
                                _putchar('2');
                                _putchar(m1 - '20');
                                }
			else if (m1 >=30 && m1 <40)
                                {
                                _putchar('3');
                                _putchar(m1 - '30');
                                }
			else if (m1 >=40 && m1 <50)
                                {
                                _putchar('4');
                                _putchar(m1 - '40');
                                }
			else if (m1 >=50 && m1 <60)
                                {
                                _putchar('5');
                                _putchar(m1 - '50');
                                }
			_putchar('\n');
		}
	}

}
