/*
* File: 8-print_base16.c
* Auth: Rodrigo Zárate Algecira
* Date: Friday 18 june 2021
*/

#include <stdio.h>

/**
* main - Prints base 16 numbers in lower
* Return: zero
*/

int main(void)
{
	int rza;
	char ab;

	for (rza = 0; rza < 10; rza++)
	putchar((rza % 10) + '0');

	for (ab = 'a'; ab <= 'f'; ab++)
	putchar(ab);

	putchar('\n');

	return (0);
}
