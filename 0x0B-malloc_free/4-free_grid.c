/*
* 4-free_grid.c - exercise to try malloc
* Author: Rodrigo Zarate Algecira
* Date: Juy 13 2021
*/

#include "holberton.h"
#include <stdlib.h>
/**
* free_grid - Frees memry of the array
* @height: height of array
* @grid: the array itself
* Return: void
*/

void free_grid(int **grid, int height)
{
	int x;
	/* walk the grid */
	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	/* clear all */
	free(grid);
}
