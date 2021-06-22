/*
* File: 3-islower.c
* Auth: Rodrigo Zárate Algecira
* Date: Tuesday june 22 2021
*/

#include "holberton.h"

/**
* _islower(int) - Return 0 if false non zero if true
* Return: Zero
*/

int _islower(int rza)
{

int result;

	if (rza >= 'A' && rza <= 'Z')
	{
		result = 0;
	}
	else if (rza >= 'a' && rza <= 'z')
	{
		result = 1;
	}
	return (result);

}
