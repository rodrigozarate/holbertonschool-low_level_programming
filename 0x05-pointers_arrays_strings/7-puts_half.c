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
		x++;
	}
	if (x % 2 != 0)
	{
	m = x / 2;
	}
	else
	{
	m = (x - 1) / 2;
	}
	y +=  m;
	p = p + m;
	while (p <= x)
	{
	_putchar(*y);
	p++;
	y++;
	}
	_putchar('\n');
}
