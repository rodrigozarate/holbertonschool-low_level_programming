/*
* File: 8-print_array.c
* Author: Rodrigo Zárate Algecira
* Date: Tuesday 29 june 2021
*/

#include "holberton.h"
#include <stdio.h>

/**
* print_array - Prints n elemnts of an array.
* @a: an array
* @n: an int
* Return: 0
*/

void print_array(int *a, int n)
{
int x;
int y;
x = 0;
y = 0;
	while (a[x] != '\0')
	{
	/* count */
		if (y < n)
		{
			printf("%d", a[x]);
		}
		if (y < (n - 1))
		{
			printf(", ");
		}
		x++;
		y++;
	}
	_putchar('\n');
}
