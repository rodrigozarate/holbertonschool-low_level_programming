/*
* File: 1-memcpy.c
* Author: Rodrigo Zárate Algecira
* Date: Monday 06 july 2021
*/

#include "holberton.h"

/**
* _memcpy - Copy memory.
* @dest: char
* @src: char
* @n: unsigned int
* Return: the pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
return (dest);
}
