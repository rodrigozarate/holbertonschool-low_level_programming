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
	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
	}
	else
	{
		return(s);
	}
}
