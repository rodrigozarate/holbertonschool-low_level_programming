/*
* 0-create_array.c - exercise to try malloc
* Author: Rodrigo Zarate Algecira
* Date: Juy 13 2021
*/

#include "holberton.h"
#include <stdlib.h>

/**
* create_array - Creates an array
* @size: size of array
* @c: character
* Return: NULL or a pointer
*/


char *create_array(unsigned int size, char c)
{
int i;
char *x;
/*get the size of char */
x = malloc(size * sizeof(char));

	/* case size 0 */
	if (size == 0)
	{
	return (NULL);
	}
	
	/* case x  NULL */
	if (x == NULL)
	{
		return (NULL);
	}
	/* create the array */
	for (i = 0; i < size; i++)
	{
		x[i] = c;
	}
return (x);
}
