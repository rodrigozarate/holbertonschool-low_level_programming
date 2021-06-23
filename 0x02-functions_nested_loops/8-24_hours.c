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
		for (m1 =0; m1 < 60; m1++)
		{
			if (h1 < 10)
				{
				_putchar('0');
				_putchar(h1);
				}
				else
				{
				_putchar(h1);	
				}
			_putchar(':');
			if (m1 < 10)
				{
				_putchar('0');
				_putchar(m1);
				}
				else
				{
				_putchar(m1);
				}
			_putchar('\n');
		}
	}

}
