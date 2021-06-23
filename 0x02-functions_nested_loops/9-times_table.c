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
		if (z > 10)
		{
		dg1 = 255;
		}
		else
		{
		dg1 = z / 10;
		}
		dg2 = z % 10;
		_putchar(dg1);
		_putchar(dg2);
		_putchar(255);
		_putchar(',');
		}
	_putchar('\n');
	}
}
