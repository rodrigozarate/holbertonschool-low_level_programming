/*
* File: 5-strstr.c
* Author: Rodrigo Zárate Algecira
* Date: Monday 06 july 2021
*/

#include "holberton.h"

/**
* _strstr - finds the needle
* @haystack: char
* @needle: char
* Return: pointer
*/

char *_strstr(char *haystack, char *needle)
{
int x;

	if (*needle == 0)
	{
		return (haystack);
	}
	while (*haystack)
	{
		x = 0;

		if (haystack[x] == needle[x])
		{
			do {
				if (needle[x + 1] == '\0')
				{
					return (haystack);
					x++;
				}
			} while (haystack[x] == needle[x]);
		}
		haystack++;
	}
	return ('\0');
}
