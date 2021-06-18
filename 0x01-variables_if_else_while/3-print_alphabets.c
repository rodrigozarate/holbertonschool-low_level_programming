/*
* File: 3-print_alphabets.c
* Auth: Rodrigo Zárate Algecira
* Date: Friday 18 june 2021
*/

#include <stdio.h>

/**
* main - Print alphabet lowercase then Uppercase
* Return: Zero
*/

int main(void)
{
	char ab;

	for (ab = 'a'; ab <= 'z'; ab++)
		putchar(ab);

	for (ab = 'A'; ab <= 'Z'; ab++)
		putchar(ab);

	putchar('\n');

	return (0);
}
