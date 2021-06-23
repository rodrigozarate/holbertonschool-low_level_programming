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

	for (x = 48; x < 57; x++)
	{
		for (y = 48; y < 57; y++)
		{
		z = x * y;
		_putchar(z + '0');
		_putchar(32);
		_putchar(',');
		}
	_putchar('\n');
	}
}
