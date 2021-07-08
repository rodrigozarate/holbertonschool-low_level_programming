/*
* File: 0-whatsmyname.c
* Author: Rodrigo Zárate Algecira
* Date: Thursday 08 july 2021
*/

#include <stdio.h>

/**
* main - print name
* @argv: vector of args
* @argc: count of args
* Return: int
*/

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
return (0);
}
