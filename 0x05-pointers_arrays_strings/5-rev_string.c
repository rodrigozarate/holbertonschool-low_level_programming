/*
* File: 5-rev_string.c
* Author: Rodrigo Zárate Algecira
* Date: Monday 28 june 2021
*/

#include "holberton.h"

/**
* rev_string - Reverse a string.
* @s: a string
* Return: the string reversed
*/

void rev_string(char *s)
{
int x;
int y;
x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	char lrev[x];
	for (y = (x - 1); y >= 0; y--, z++)
	{
		lrev[z]=s[y];
	}
	s=lrev;
}
