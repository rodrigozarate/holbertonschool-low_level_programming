/*
* File: 4-isalpha.c
* Auth: Rodrigo Zárate Algecira
* Date: Tuesday june 22 2021
*/

#include "holberton.h"

/**
* _isalpha - Return 0 if false non zero if is letter
* Return: zero or one
* @rza: character to evaluate
*/

int _isalpha(int rza)
{

int result;

        result = 0;

        if (rza >= 'A' && rza <= 'z')
        {
		if (rza <= 'Z' && >= 'a')
		{
                result = 1;
		}
        }
        return (result);

}
