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
	
	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
		_putchar(x * y);
		_putchar(',');
		}
	_putchar('\n');
	}
}
