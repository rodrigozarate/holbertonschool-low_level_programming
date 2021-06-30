/*
* File: 100-atoi.c
* Author: Rodrigo Zárate Algecira
* Date: Tuesday 29 june 2021
*/

#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* atoi - Remove letters.
* Return: void
*/

int _atoi(char *s)
{
int x = 48;
int y = 57;
int a = 0;
int plus = 43;
int less = 45; 
/* if ascii > 48 && < 57 */
	while (s[a])
	{
		if (s[a] == pluss || s[a] == less)
		{
		putchar(s[a]);
		} 
		if (s[a] > x && s[a] < y)
		{
		putchar(s[a]);
		}
		else
		{
		return (0);
		}
	a++;
	}
}
