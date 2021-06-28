/*
* 1-swap.c
* Auth: Rodrigo Zárate Algecira
* Date: Monday 28 june 2021
*/

#include "holberton.h"
  
/**
* swap_int - Swap two ints
* @a: int
* @b: int
* Return: void
*/

void swap_int(int *a, int *b)
{
	int c = *a;
        *a = *b;
	*b = c;
}
