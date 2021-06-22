/*
* File: 1-alphabet.c
* Auth: Rodrigo Zárate Algecira
* Date: Tuesday june 22 2021
*/

#include "holberton.h"

/**
* main - Prints alphabet
* Return: Zero
*/

int main(void)
{
	int rza;
	char abc[] = "abcdefghijklmnopqrstuvwxyz";

	for (rza = 0; rza <= 27; rza++)
	{
		_putchar(abc[rza]);
	}
		_putchar('\n');
	return (0);
}
