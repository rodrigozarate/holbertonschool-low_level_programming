/*
* File: 9-print_comb.c
* Auth: Rodrigo Zárate Algecira
* Date: Friday 18 june 2021
*/

#include <stdio.h>

/**
* main - Prints single digits combination numbers
* Return: zero
*/

int main(void)
{
	int rza;

	for (rza = 0; rza <= 9; rza++)
	{
		putchar((rza % 10) + '0');
		if (rza == 9)
		continue;
		
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
