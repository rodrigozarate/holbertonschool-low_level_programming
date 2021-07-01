/*
* File: 7-leet.c
* Author: Rodrigo Zárate Algecira
* Date: Thursday 01 july 2021
*/

#include "holberton.h"
#include <stdio.h>

/**
* leet - encode to leet.
* Return: the pointer to dest
*/

char *leet(char *)
{
int i = 0;
/* walk string */
	while (*[i])
	{
		/* test if character is on the list */
		printf(*[i]);
		if (*[i] == 'a' || *[i] == 'A')
		*[i] = 4;
		if (*[i] == 'e' || *[i] == 'E')
		*[i] = 3;
		if (*[i] == 'o' || *[i] == 'O')
		*[i] = 0;
		if (*[i] == 't' || *[i] == 'T')
		*[i] = 7;
		if (*[i] == 'l' || *[i] == 'L')
		*[i] = 1;
		i++;
	}
/* if on the list change */
/* else continue */
/* append null */
return (*);
}
