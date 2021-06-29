/*
* File: 6-puts2.c
* Author: Rodrigo Zárate Algecira
* Date: Monday 28 june 2021
*/

#include "holberton.h"

/**
* puts2 - Prints every other char of a string.
* @str: a string
* Return: odds
*/

void puts2(char *str)
{
int x;
int p = 0;
char *y;
x = 0;
y = str;

	while (str[x] != '\0')
	{
		x++;
	}
	while (p < ((x / 2) + 1))
	{
	_putchar(*y);
	p++;
	y += 2;
	}
	_putchar('\n');
}
