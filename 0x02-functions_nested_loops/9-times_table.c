/*
* File: 9-time_tables.c
* Auth: Rodrigo Zárate Algecira
* Date: Wednesday june 23 2021
*/

#include "holberton.h"

/**
* times_table - Print the 9 times table
* Return: void
*/
void times_table(void)
{
int x, y, z;
int dg1, dg2;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
		z = x * y;
		dg1 = z;

			while (dg1 >= 10)
			{
			dg1 = dg1 / 10;
			}
			dg2 = z % 10;
			if (x > 1)
			{
				if (z < 10)
				{
				_putchar(32);
				}
			}

			if (z > 9)
			{
			_putchar(dg1 + '0');
			}
			_putchar(dg2 + '0');
			if (y < 9)
			{
			_putchar(',');
			_putchar(32);
			}
			if (x < 9)
		}
	_putchar('\n');
	}
}
