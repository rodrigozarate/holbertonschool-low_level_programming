/*
* 1-print_numbers.c - Thats it
* Author: Rodrigo Zárate Algecira
* Date: July 23, 2021
*/

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - Print numbers thats it...
* @n: const unsigned int
* @separator: The separator between numbers
* Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...);
{
/* declare unsigned to compare an count */
unsigned int i;

	/* call structure */
	va_list theList;

	/* init */
	va_start(theList, n);
	/* walk the list */
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(theList, int));
		if (separator && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	/* endit */
	va_end(theList);

printf("\n");
}
