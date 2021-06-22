/*
* File: 3-islower.c
* Auth: Rodrigo Zárate Algecira
* Date: Tuesday june 22 2021
*/

#include "holberton.h"

/**
* _islower - Return 0 if false non zero if true
* Return: Zero
* Parameter: rza
*/

int _islower(int rza)
{

int result;

	result = 0;

	if (rza >= 'a' && rza <= 'z')
	{
		result = 1;
	}
	return (result);

}
