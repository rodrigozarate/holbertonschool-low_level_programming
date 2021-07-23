/*
* 2-print_strings.c - Print string
* Author: Rodrigo Zárate Algecira
* Date: July 23, 2021
*/

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - Print strings thats it...
* @n: const unsigned int
* @separator: The separator between numbers
* Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
/* declare unsigned to compare an count */
unsigned int i;
char *word;

	/* call structure */
	va_list theList;

	/* init */
	va_start(theList, n);
	/* walk the list */
	for (i = 0; i < n; i++)
	{
		word = a_arg(theList, char *);
		if (word)
		{
			printf("%s", word);
		}
		else
		{
			printf("(nil)");
		}

		if (separator && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	/* endit */
	va_end(theList);

printf("\n");
}
