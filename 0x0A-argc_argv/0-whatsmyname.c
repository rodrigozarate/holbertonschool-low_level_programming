/*
* File: 0-whatsmyname.c
* Author: Rodrigo Zárate Algecira
* Date: Thursday 08 july 2021
*/

#include <stdio.h>

/**
* main - print name
* @argv: vector of args
* Return: int
*/

int main(int argc, char *argv[])
{
int x;
x = argc;
	printf("%s\n", argv[0]);
}
