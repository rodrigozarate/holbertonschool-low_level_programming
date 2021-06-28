/*
* 3-puts.c
* Auth: Rodrigo Zárate Algecira
* Date: Monday 28 june 2021
*/

#include "holberton.h"

/**
* _puts - Prints a string.
* @str: a string
* Return: the string to stdout
*/

void _puts(char *str)
{
int x;
x = 0;
 	while(str[x] != '\0')
	{
		putchar(str[x]);
		x++;
	}
}
