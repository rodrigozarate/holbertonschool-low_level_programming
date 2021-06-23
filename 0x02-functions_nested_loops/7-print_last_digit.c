/*
* File: 7-print_last_digit.c
* Auth: Rodrigo Zárate Algecira
* Date: Tuesday june 22 2021
*/

#include "holberton.h"

/**
* print_last_digit - Print last digit
* Return: value of last digit
* @rza: int to be tested
*/

int print_last_digit(int rza)
{
int result;
result = (rza % 10);
_putchar('0' + result);
return (result);
}
