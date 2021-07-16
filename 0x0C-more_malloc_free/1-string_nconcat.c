/*
* 1-string_nconcat.c - concatenate two strings
* Author: Rodrigo Zárate Algecira
* Date: Friday, july 16 2021
*/

#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* string_nconcat - put n chars of s2 after s1
* @n: unsigned int
* @s1: char
* @s2: char
* Return: void pointer or NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
void *p;

/* if NULL is passed, treat it as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
/* unsigned to compare unsigned */
unsigned int lengths1, lengths2;
	for (lengths1 = 0; s1[lengths1] != '\0'; lengths1++)
	;

	for (lengths2 = 0; s2[lengths2] != '\0'; lengths2++)
	;

/* If n is > or = to the length of s2 -> use the entire s2 */
	if (n >= lengths2)
		n = lengths2;

p = malloc(sizeof(char) * (lengths1 + n + 1));

	if (p == NULL)
		return (NULL);

unsigned int i;
	for (i = 0; i < lengths1; i++)
		p[i] = s1[i];
	for (i = lengths1; i < lengths1 + n; i++)
		p[i] = s2[i - lengths1];
	/* null terminated */
	p[j] = '\0';
/* return the pointer */
return (p);
}
