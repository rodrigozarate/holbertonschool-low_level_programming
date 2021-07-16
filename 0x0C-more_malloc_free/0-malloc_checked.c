/*
* 0-malloc_checked.c - show the use of exit
* Author: Rodrigo Zárate Algecira
* Date: Friday, july 16 2021
*/

#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* malloc_checked - shows the basic use of exit
* @b: unsigned int
* Return: void pointer
*/

void *malloc_checked(unsigned int b)
{
/* void pointer */
void *p

p = malloc(b);
	if (x == NULL)
	{
	/* memory allocation fails */
		exit(98);
	}

/* return the pointer */
return (p);
}
