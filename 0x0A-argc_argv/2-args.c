/*
* File: 2-args.c
* Author: Rodrigo Zárate Algecira
* Date: Thursday 08 july 2021
*/

#include <stdio.h>

/**
* main - print all args
* @argc: number of args
* @argv: vector of args
* Return: int
*/

int main(int argc, char *argv[])
{
int x;
	for(x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
return (0);
}
