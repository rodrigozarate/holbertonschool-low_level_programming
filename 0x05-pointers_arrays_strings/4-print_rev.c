/*
* File: 4-print_rev.c
* Author: Rodrigo Zárate Algecira
* Date: Monday 28 june 2021
*/

#include "holberton.h"

/**
* print_rev - Prints a string in reverse.
* @s: a string
* Return: the string to stdout
*/

void print_rev(char *s)
{
int x;
int y;
x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	for (y = (x + 1); y > 0; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}
