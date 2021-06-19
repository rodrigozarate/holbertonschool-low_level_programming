/*
* File: 102-print_comb5.c
* Auth: Rodrigo Zárate Algecira
* Date: Friday 18 june 2021
*/

#include <stdio.h>

/**
* main - Print the combinatios of four digits
*        made of two by two separated by space
*        do not repeat combination
* Return: zero
*/


int main(void)
{
int r1, r2, r3, r4, r5, r6;
r1 = r2 = r3 = r4 = 48;

while (r4 < 58)
{
r3 = 48;
	while (r3 < 58)
	{
	r2 = 48;
		while (r2 < 58)
		{
		r1 = 48;
			while (r1 < 58)
			{
			r5 = (r4 * 10) + r3;
			r6 = (r2 * 10) + r1;
				if (r5 < r6)
				{
					putchar(r4);
					putchar(r3);
					putchar(' ');
					putchar(r2);
					putchar(r1);
					if (r4 == 57 && r3 == 56 && r2 == 57 && r1 == 57)
					{
					break;
					}
					putchar(',');
					putchar(' ');

				}
				r1++;
			}
			r2++;
		}
		r3++;
	}
	r4++;
}
putchar('\n');
return (0);
}
