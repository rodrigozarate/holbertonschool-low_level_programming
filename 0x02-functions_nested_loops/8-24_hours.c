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
int h1, h2, h3, m1, m2;
	for (h1 = 0; h1 < 3; h1++)
	{
		if (h1 < 2)
		{
		h3 = 10;
		}
		else
		{
		h3 = 4;
		}
		for (h2 = 0; h2 < h3; h2++)
		{
			for (m1 = 0; m1 < 6; m1++)
			{
				for (m2 = 0; m2 < 10; m2++)
				{
					_putchar(h1 + '0');
					_putchar(h2 + '0');
					_putchar(':');
					_putchar(m1 + '0');
					_putchar(m2 + '0');
					_putchar('\n');
				}
			}
		}
	}
}
