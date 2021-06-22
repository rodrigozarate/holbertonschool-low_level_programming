/*
* File: 6-abs.c
* Auth: Rodrigo Zárate Algecira
* Date: Tuesday june 22 2021
*/

#include "holberton.h"

/**
* _abs - Computes the absolute value of integer
* Return: the value of integer taken from rza
* @rza: integer given
*/

int _abs(int rza)
{

	if (rza < 0)
	{
	rza = (-1) * rza;
	}

	return (rza);

}
