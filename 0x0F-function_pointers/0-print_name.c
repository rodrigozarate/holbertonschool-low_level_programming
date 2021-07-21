/*
* 0-print_name.c - Prints the given name
* Author: Rodrigo Zárate Algecira
* Date: Wednesday, July 21 2021
*/

#include "function_pointers.h"
#include <stdio.h>

/**
* print_name - print given name
* @name : string
* @f: function
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
