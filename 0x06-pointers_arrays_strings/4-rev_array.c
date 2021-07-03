/*
* File: 4-rev_array.c
* Author: Rodrigo Zárate Algecira
* Date: Friday 02 july 2021
*/

#include "holberton.h"

/**
* reverse_array - reverse array.
* @a: array
* @n: elements of array
* Return: void
*/

void reverse_array(int *a, int n)
{

int i, c;

for (i = 0; (i < (n - 1) / 2); i++)
/* walk the array half way the numbers of elements */
	{
	c = a[i];
	/* hold content of a */
	a[i] = a[n - 1 - i];
	/* place content of end to start */
	a[n - 1 - i] = c;
	/* place stored content to the end */
	}
}
