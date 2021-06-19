/*
* File: 100-print_comb3.c
* Auth: Rodrigo Zárate Algecira
* Date: Friday 18 june 2021
*/

#include <stdio.h>

/**
* main - Print the combinatios of two digits
* Return: zero
*/

int main(void)
{
	int nm1, nm2;

	for (nm1 = 0; nm1 < 10; nm1++)
	{
		for (nm2 = 0; nm2 < 10; nm2++)
		{
			if (nm1 == nm2)
				continue;

			putchar(nm1);
			putchar(nm2);

			if (nm1 == 9 && nm2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
