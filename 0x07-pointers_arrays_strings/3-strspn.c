/*
* File: 3-strspn.c
* Author: Rodrigo Zárate Algecira
* Date: Monday 06 july 2021
*/

#include "holberton.h"

/**
* _strspn - Find characters in beggining of string.
* @s: char
* @accept: char
* Return: the number of bytes in s from accept
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int x;
int i;
x = 0;
	while (*s)
	{
	/* walk the string */
		for (i = 0; accept[i]; i++)
		{
		/* run until null */
			if (*s == accept[i])
			{
				x++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
			/* if gets the end */
				return (x);
			}
		}
		s++;
	}
return (x);
}
