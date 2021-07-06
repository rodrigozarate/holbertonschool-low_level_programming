/*
* File: 0-memset.c
* Author: Rodrigo Zárate Algecira
* Date: Monday 06 july 2021
*/

#include "holberton.h"

/**
* _memset - Fills memory.
* @s: char
* @b: char
* @n: unsigned int
* Return: the pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
return (s);
}
