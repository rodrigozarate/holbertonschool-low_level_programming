/*
* 2-int_index.c - Search for integer
* Author: Rodrigo Zárate Algecira
* Date: Wednesday, July 21 2021
*/

#include <stdio.h>
#include "function_pointers.h"

/**
* int_index - Search for integer
* @array: int
* @size: int
* @cmp: function
* Return: void
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, x;

	if (size <= 0)
	{
		return (-1);
	}
	if (size && cmp != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			x = cmp(array[i]);
			if (x != 0)
			{
				return (i);
			}
		}
	}
	/* If no element matches, return -1 */
	return (-1);
}
