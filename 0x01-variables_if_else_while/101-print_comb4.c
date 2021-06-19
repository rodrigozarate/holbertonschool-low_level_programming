/*
* File: 101-print_comb4.c
* Auth: Rodrigo Zárate Algecira
* Date: Friday 18 june 2021
*/

#include <stdio.h>

/**
* main - Print the combinatios of three digits
*	 tree digits must be different
*	 do not repeat combination
* Return: zero
*/

int main(void)
{
	int rza = 48;
	int zar = 49;
	int arz = 50;

	while (rza <= 55)
	{
		while (zar <= 56)
		{
			while (arz <= 57)
			{
				putchar(rza);
				putchar(zar);
				putchar(arz);
					if (rza != 55)
					{
						putchar(44);
						putchar(32);
					}
					arz++;
			}
			zar++;
			arz = zar + 1;
		}
		rza++;
		zar = rza + 1;
		arz = zar + 1;
	}
	putchar('\n');
	return (0);
}
