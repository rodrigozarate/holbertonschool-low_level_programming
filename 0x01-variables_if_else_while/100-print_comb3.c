/*
* File: 100-print_comb3.c
* Auth: Rodrigo Zárate Algecira
* Date: Friday 18 june 2021

#include <stdio.h>

/**
* main - Print the combinatios of two digits
* Return: zero
*/

int main(void)
{
	int A = 48;
	int B = 49;

	while (A <= 56)
	{
		while (B <= 57)
		{
			putchar(A);
			putchar(B);
				if (A != 56)
				{
					putchar(44);
					putchar(32);
				}
			B++;
		}
		A++;
		B = A + 1;
	}
	putchar('\n');
	return (0);
}
