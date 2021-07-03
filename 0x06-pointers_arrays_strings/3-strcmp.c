/*
* File: 3-strcmp.c
* Author: Rodrigo Zárate Algecira
* Date: Friday 02 july 2021
*/

#include "holberton.h"

/**
* _strcmp - compare two string.
* @s1: string one
* @s2: string two
* Return: int
*/

int _strcmp(char *s1, char *s2)
{
	while (((*s1 != '\0') && (*s2 != '\0')) && (*s1 == *s2))
	/* walk string until finds null */
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	/* if both strings end the same */
	{
		return (0);
	}

	else
	{
	/* diffrence between strings */
		return (*s1 - *s2);
	}
}
