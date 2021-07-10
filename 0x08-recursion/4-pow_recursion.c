/*
* File: 4-pow_recursion.c
* Author: Rodrigo Zárate Algecira
* Date: Friday 09 july 2021
*/

#include "holberton.h"

/**
* _pow_recursion - x to the power of y
* @x: int
* @y: int
* Return: int -1, or pow
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	/* special case end -1 */
	return (-1);
	}
	else if (y >= 0)
	{
	x *= _pow_recursion(x, y - 1);
	}
	return (x);
}
