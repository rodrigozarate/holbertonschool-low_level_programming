/*
* File: 3-mul.c
* Author: Rodrigo Zárate Algecira
* Date: Thursday 08 july 2021
*/

#include <stdio.h>
#include <stdlib.h>

/**
* main - print mult of two numbers
* @argc: number of args
* @argv: vector of args
* Return: int or Error
*/

int main(int argc, char *argv[])
{
int x;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

x = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", x);
return (0);
}
