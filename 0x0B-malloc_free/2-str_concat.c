/*
* 2-str_concat.c - exercise to join two strings using malloc
* Author: Rodrigo Zarate Algecira
* Date: Juy 13 2021
*/

#include "holberton.h"
#include <stdlib.h>

/**
* str_concat - Join  tow strings
* @s1: string one
* @s2: string two
* Return: NULL or a pointer
*/

char *str_concat(char *s1, char *s2)
{
char *thereturnedpointer;
int lengthone = 0;
int lengthtwo = 0;

int i, x;
	if (s1 == NULL)
		lengthone = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			lengthone++;
	}

	if (s2 == NULL)
		lengthtwo = 0;
	else
	{
		for (i = 0; s2[i]; i++)
			lengthtwo++;
	}
	x = lengthone + lengthtwo + 1;
	thereturnedpointer = malloc(x * sizeof(char));
	if (thereturnedpointer == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < lengthone; i++)
	{
		thereturnedpointer[i] = s1[i];
	}
	for (i = 0; i < lengthtwo; i++)
	{
		thereturnedpointer[i + lengthone] = s2[i];
	}
	thereturnedpointer[lengthone + lengthtwo] = '\0';
return (thereturnedpointer);
}
