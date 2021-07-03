/*
* File: 5-string_toupper.c
* Author: Rodrigo Zárate Algecira
* Date: Friday 02 july 2021
*/

#include "holberton.h"

/**
* string_toupper - lower to upper.
* @s: the string to be evaluated.
* Return: char
*/

char *string_toupper(char *s)
{

int i;

i = 0;
	while (*(s + i))
	/* walk the string */
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		/* validate if is letter ascii range */

			*(s + i) -= 32;
			/* remove diference lower to upper */
		i++;
	}
	return (s);
}
