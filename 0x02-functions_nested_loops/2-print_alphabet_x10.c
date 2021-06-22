/*
* File: 2-print_alphabet_x10.c
* Auth: Rodrigo Zárate Algecira
* Date: Tuesday june 22 2021
*/

#include "holberton.h"

/**
* print_alphabet_x10 - Prints alphabet 10 times
* Return: nothing
*/

void print_alphabet_x10(void)
{
	int rza;

	for (rza = 1; rza <= 10; rza++)
	{
		char abc;

		for (abc = 'a'; abc <= 'z'; abc++)
		{
			_putchar(abc);
		}
		_putchar('\n');
	}
}
