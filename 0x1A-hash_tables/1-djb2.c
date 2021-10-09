/*
* 1-djb2.c - Hash table
* Author: Rodrigo Zárate Algecira
* Date: October 8, 2021
*/

#include "hash_tables.h"

/**
* hash_djb2 - hash_djb2 function
* @str: string
* Return: hash
*/

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hashdjb2;
	int character;

	hashdjb2 = 3374;
	character = *str;
	while (character)
	{
		hashdjb2 = ((hashdjb2 << 5) + hashdjb2) + character;
		character = *str++;
	}
return (hashdjb2);
}
