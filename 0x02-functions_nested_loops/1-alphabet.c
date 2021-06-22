/*
* File: 1-alphabet.c
* Auth: Rodrigo Zárate Algecira
* Date: Tuesday june 22 2021
*/

#include "holberton.h"

/**
* print_alphabet - Prints alphabet in lowercase
* Return: Zero
*/

void print_alphabet(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		_putchar(abc);
	}
		_putchar('\n');
}
