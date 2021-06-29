/*
* File: 9-strcpy.c
* Author: Rodrigo Zárate Algecira
* Date: Tuesday 29 june 2021
*/

#include "holberton.h"
#include <stdio.h>

/**
* _strcpy - Copy the string pointed to buffer.
* @dest: buffer
* @src: an string
* Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
int x = 0;
	while (src[x] != '\0')
	{
	/* count */
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
