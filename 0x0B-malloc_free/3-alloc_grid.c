/*
* 3-alloc_grid.c - double pointer to matrix
* Author: Rodrigo Zarate Algecira
* Date: Juy 13 2021
*/

#include "holberton.h"
#include <stdlib.h>

/**
* alloc_grid - Creates an array
* @width: width
* @height: height
* Return: NULL or a pointer
*/

int **alloc_grid(int width, int height)
{
	int i, j;
	int **a;
	/* case w or h = NULL */
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	/* set memory */
	a = (int **)malloc(sizeof(int *) * height);
	/* if malloc fails ret NULL */
	if (a == NULL)
		return (NULL);
	/* walk the grid */
	for (i = 0; i < height; i++)
	{
		a[i] = (int *)malloc(sizeof(int) * width);
		/* if malloc fails free memry */
		if (a[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(a[j]);
			free(a);
			return (NULL);
		}
		/* populate */
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
