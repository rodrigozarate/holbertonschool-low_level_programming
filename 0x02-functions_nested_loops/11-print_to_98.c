/*
* File: 11-print_to_98.c
* Auth: Rodrigo Zárate Algecira
* Date: Wednesday june 22 2021
*/

#include "holberton.h"
#include <stdio.h>

/**
* print_to_98 - Print to 98 from n
* Return: Zero
*/
void print_to_98(int n)
{

	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("98");
	}
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	if (n == 98)
	{
		printf("98");
	}
}
