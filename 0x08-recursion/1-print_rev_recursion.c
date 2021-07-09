/*
* File: 1-print_rev_recursion.c
* Author: Rodrigo Zárate Algecira
* Date: Friday 09 july 2021
*/

#include "holberton.h"

/**
* _print_rev_recursion - write string using recusion in reverse.
* @s: char
* Return: void
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
	{

	}
}
