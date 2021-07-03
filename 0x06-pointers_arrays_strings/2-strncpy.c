/*
* File: 2-strncpy.c
* Author: Rodrigo Zárate Algecira
* Date: Friday 02 july 2021
*/

#include "holberton.h"

/**
* _strncat - glue two strings.
* @dest: array
* @src: array
* @n: elements of array
* Return: char
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;

i = 0;
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	/* go till the end and erase */
	{
	*(dest + i) = '\0';
	i++;
	}
	return (dest);
}
