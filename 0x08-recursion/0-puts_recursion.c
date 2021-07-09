/*
* File: 0-puts_recursion.c
* Author: Rodrigo Zárate Algecira
* Date: Friday 09 july 2021
*/

#include "holberton.h"

/**
* _puts_recursion - write string using recusion.
* @s: char
* Return: void
*/

void _puts_recursion(char *s)
{
int i;
	if (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
		_puts_recursion(char *s);
	}
	else
	{
		_putchar('\0');
	}

}
