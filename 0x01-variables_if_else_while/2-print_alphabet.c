/*
* File: 2-print_alphabet.c
* Auth: Rodrigo Zárate Algecira
* Date: Friday 18 june 2021
*/

#include <stdio.h>

/**
* main - Prints lowercase alphabet
* Return: Zero
*/

int main(void)
{
	char ab;

	for (ab = 'a'; ab <= 'z'; ab++)
		putchar(ab);

	putchar('\n');

	return (0);
}
