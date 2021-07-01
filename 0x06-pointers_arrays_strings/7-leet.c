/*
* File: 7-leet.c
* Author: Rodrigo Zárate Algecira
* Date: Thursday 01 july 2021
*/

#include "holberton.h"
#include <stdio.h>

/**
* leet - encode to leet.
* @k: the string to be evaluated.
* Return: the pointer to dest
*/

char *leet(char *k)
{
int i = 0;
/* walk string */
	while (k[i])
	{
		/* test if character is on the list */
		printf(k[i]);
		if (k[i] == 'a' || k[i] == 'A')
		k[i] = '4';
		if (k[i] == 'e' || k[i] == 'E')
		k[i] = 3;
		if (k[i] == 'o' || k[i] == 'O')
		k[i] = 0;
		if (k[i] == 't' || k[i] == 'T')
		k[i] = 7;
		if (k[i] == 'l' || k[i] == 'L')
		k[i] = 1;
		i++;
	}
/* if on the list change */
/* else continue */
/* append null */
return (k);
}
