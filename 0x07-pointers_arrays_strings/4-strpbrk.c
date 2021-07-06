/*
* File: 4-strpbrk.c
* Author: Rodrigo Zárate Algecira
* Date: Monday 06 july 2021
*/

#include "holberton.h"

/**
* _strpbrk - Searches a string.
* @s: char
* @accept: char
* Return: a pointer
*/

char *_strpbrk(char *s, char *accept)
{
int i;

	while (*s)
	/* walk the string */
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
			/* ends here */
				return (s);
			}
		}
	s++;
	}
/* returns NULL */
return ('\0');
}
