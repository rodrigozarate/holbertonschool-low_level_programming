/*
* 3-print_all.c - Print c i f s
* Author: Rodrigo Zárate Algecira
* Date: July 23, 2021
*/

#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_all - You know what I mean
* @format: List
* Return: void
*/

void print_all(const char *const format, ...)
{
	va_list theList;
	int def;
	unsigned int i = 0;
	char *theString;

	while (format)
	{
		va_start(theList, format);
		while (format[i])
		{
			def = 1;
			switch (format[i])
			{
			case 'c':
				printf("%c", va_arg(theList, int));
				break;
			case 'i':
				printf("%d", va_arg(theList, int));
				break;
			case 'f':
				printf("%f", va_arg(theList, double));
				break;
			case 's':
				theString = va_arg(theList, char *);
				if (!theString)
					theString = "(nil)";
				printf("%s", theString);
				break;
			default:
				def = 0;
				break;
			}
			if (def && format[i + 1])
				printf(", ");
			i++;
		}
		va_end(theList);
		break;
	}
	printf("\n");
}
