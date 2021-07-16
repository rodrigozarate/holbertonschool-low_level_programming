/*
* 3-array_range.c - creates an array of integers
* Author: Rodrigo Zárate Algecira
* Date: Friday, july 16 2021
*/

#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _calloc - shows the basic function of calloc
* @min: int
* @max: int
* Return: void pointer or NULL
*/

int *array_range(int min, int max)
{
/* If min > max, return NULL */	
	if (min > max)
	{
		return (NULL);
	}
/* int pointer to match */
int *p;

/* include max and min */
p = malloc(sizeof(int) * (max - min +1));

	if (p == NULL)
	{
	/* memory allocation fails */
		return (NULL);
	}

/* using conventio ijk */
int i, j = 0;

	/* space in p[j] start in 0 filled with value of i an so on */
	for (i = min; i <= max; i++)
	{
		p[j] = i;
		j++;
	}
/* thats all folks */
/* return the pointer */
return (p);
}
