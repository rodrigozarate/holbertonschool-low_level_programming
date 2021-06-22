/*
* File: 6-abs.c
* Auth: Rodrigo Zárate Algecira
* Date: Tuesday june 22 2021
*/

#include "holberton.h"

/**
* int _abs - Computes the absolute value of integer
* Return: void
* @rza: integer given
*/

int _abs(int rza)
{

	if (rza < 0)
	{
        rza = (-1) * rza;
	}

	/* Print the absolute value */
	printf("%d ", rza);

}
