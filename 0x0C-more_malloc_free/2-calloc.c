/*
* 2-calloc.c - emulate calloc function
* Author: Rodrigo Zárate Algecira
* Date: Friday, july 16 2021
*/

#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _calloc - shows the basic function of calloc
* @nmemb: unsigned int
* @size: unsigned int
* Return: void pointer or NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
/* declarations on top REMEMBER mufasa */
char *p;
/* unsigned to compare unsigned */
unsigned int i;
/* If nmemb or size is 0, then _calloc returns NULL */
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

p = malloc(size * nmemb);

	if (p == NULL)
	{
	/* memory allocation fails */
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
	{
		p[i] = '\0';
	}

/* return the pointer */
return (p);
}
