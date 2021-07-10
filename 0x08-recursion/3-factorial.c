/*
* File: 3-factorial.c
* Author: Rodrigo Zárate Algecira
* Date: Friday 09 july 2021
*/

#include "holberton.h"

/**
* factorial - factorial
* @n: int
* Return: int -1, 0, 1
*/

int factorial(int n)
{
int x;
	if (n < 0)
	{
	/* special case end -1 */
	return (-1);
	}
	else if (n == 0)
	{
	/* special case end 1 */
	return (1);
	}
	else
	{
		x = n * factorial(n - 1);
	}
	return (x);
}
