/*
* File: 7-puts_half.c
* Author: Rodrigo Zárate Algecira
* Date: Monday 28 june 2021
*/

#include "holberton.h"

/**
* puts_half - Prints last half of a string.
* @str: a string
* Return: 0
*/

void puts_half(char *str)
{
int x;
int p = 0;
int m = 0;
char *y;
x = 0;
y = str;

	while (str[x] != '\0')
	{
	/* count */
		x++;
	}
	if (x % 2 != 0)
	{
	/* check if is odd */
	m = (x - 2) / 2;
	}
	else
	{
	/* if not odd then is even */
	m = x / 2;
	}
	/* move pointer forward */
	y = y + m;
	p = p + m;
	while (p < x)
	{
	_putchar(*y);
	p++;
	y++;
	}
	_putchar('\n');
}
