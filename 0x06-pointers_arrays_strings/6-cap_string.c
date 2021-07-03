/*
* File: 6-cap_string.c
* Author: Rodrigo Zárate Algecira
* Date: Friday 02 july 2021
*/

#include "holberton.h"

/**
* cap_string - capitalize words.
* @s: the string to be evaluated.
* Return: char
*/

char *cap_string(char *s)
{
	int i = 0, j;
	char a[] = " \t\n,;.!?\"(){}";
	/* define the list of characters that set the end of a word */
	while (*(s + i))
	/* walk the string */
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		/* chaek for ASCII lowe range */
		{
			if (i == 0)
			/* being the first */
				*(s + i) -= 32;
			else
			{
				for (j = 0; j <= 12; j++)
				/* walk the words delimiter */
				{
					if (a[j] == *(s + i - 1))
					/* previuos is in the list */
						*(s + i) -= 32;
						/* go to uppercase */
				}
			}
		}
		i++;
	}
	return (s);
}
