/*
* File: 2-strlen_recursion.c
* Author: Rodrigo Zárate Algecira
* Date: Friday 09 july 2021
*/

#include "holberton.h"

/**
* _strlen_recursion - write string using recusion in reverse.
* @s: char
* Return: int
*/

int _strlen_recursion(char *s)
{
int x = 0;
	if (*s != '\0')
	{
	x++;
	x += _strlen_recursion(s + 1);
	}
	/* on getting back return the sum */
	return (x);
}
