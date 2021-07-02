/*
* File: 0-strcat.c
* Author: Rodrigo Zárate Algecira
* Date: Thursday 01 july 2021
*/

#include "holberton.h"
#include <stdio.h>

/**
* _strcat - Append scr to dest.
* @dest: final string concatenated
* @src: an string
* @dest: destyne string
* Return: the pointer to dest
*/

char *_strcat(char *dest, char *src)
{
int x = 0;
int y = 0;
int z;
int i;
int j;

/* count first string */
	while (src[x])
	{
		x++;
	}
/* count second string */
	while (dest[y])
	{
		y++;
	}
/* create a new string that can hold the two strings */

/* copy value of string one, then string two */
	for (i = y, j = 0; i < y + x; i++, j++)
	{
		dest[i] = src[j];
	}
	z = x + y + 1;
	dest[z] = '\0';
/* append null */
return (dest);
}
