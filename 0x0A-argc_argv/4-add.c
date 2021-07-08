/*
* File: 4-add.c
* Author: Rodrigo Zárate Algecira
* Date: Thursday 08 july 2021
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - print ad of positive numbers
* @argc: number of args
* @argv: vector of args
* Return: int or Error
*/

int main(int argc, char *argv[])
{
int x = 0;
int loop1;
int loop2;

	for (loop1 = 1; loop1 < argc; loop1++)
	{
		for (loop2 = 0; argv[loop1][loop2]; loop2++)
		{
			if (isdigit(argv[loop1][loop2]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (loop1 = 1; loop1 < argc; loop1++)
	{
		x += atoi(argv[loop1]);
	}
	printf("%d\n", x);
	return (0);
}
