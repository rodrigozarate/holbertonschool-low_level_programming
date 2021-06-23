/*
* File: 10-add.c
* Auth: Rodrigo Zárate Algecira
* Date: Tuesday june 22 2021
*/

#include "holberton.h"
#include <stdio.h>

/**
* add - Computes add
* Return: addition of int
* @x: int value
* @y: int value
*/

int add(int x, int y)
{
	int z;

	scanf("%d%d", &x, &y);

	z = x + y;

	return (z);
}
