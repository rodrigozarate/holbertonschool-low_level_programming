/*
* 2-strlen.c
* Auth: Rodrigo Zárate Algecira
* Date: Monday 28 june 2021
*/

#include "holberton.h"

/**
* _strlen - Returns lenght of a string
* @s: char
* Return: lenght of string in s
*/

int _strlen(char *s)
{
int x;
x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
