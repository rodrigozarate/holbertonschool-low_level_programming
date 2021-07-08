/*
* File: 1-args.c
* Author: Rodrigo Zárate Algecira
* Date: Thursday 08 july 2021
*/

#include <stdio.h>

/**
* main - print args
* @argc: number of args
* @argv: vector of args
* Return: int
*/

int main(int argc, char *argv[])
{

if( argv[0])
	printf("%d\n", argc - 1);
}
