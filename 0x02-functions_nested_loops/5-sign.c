/*
* File: 5-sign.c
* Auth: Rodrigo Zárate Algecira
* Date: Tuesday june 22 2021
*/

#include "holberton.h"

/**
* main - Print +, 0, or -, depending on number given
* Return: one, zero, or minus one depending on given number
* @rza - the given number
*/

int print_sign(int rza)
{
int result;
	if (rza > 0)
/* check if number is mayor than zero */
	{
	_putchar('+');
	result = 1;
	}else if (rza == 0)
/* check if number is equal to zero */
	{
	_putchar('0');
        result = 0;
	}else if (rza < 0)
/* check if number is minor than zero */
	{
	_putchar('-');
        result = -1;
	}
	return (result);
}
