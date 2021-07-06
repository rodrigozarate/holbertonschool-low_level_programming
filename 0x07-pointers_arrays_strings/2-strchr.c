/*
* File: 2-strchr.c
* Author: Rodrigo Zárate Algecira
* Date: Monday 06 july 2021
*/

#include "holberton.h"

/**
* _strchr - Find character in string.
* @s: char
* @c: char
* Return: the pointer to first find or NULL
*/

char *_strchr(char *s, char c)
{
	do {
	/* walk the string */
		if (*s == c)
		{
			break;
		}
	} while (*s++);

return (s);
}
