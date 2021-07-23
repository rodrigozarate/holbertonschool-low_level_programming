/*
* 0-sum_them_all.c - Sum args in func
* Author: Rodrigo Zárate Algecira
* Date: July 23, 2021
*/

#include "variadic_functions.h"

/**
* sum_them_all - Sum args given
* @n: const int
* Return: 0 or the sum of args
*/
int sum_them_all(const unsigned int n, ...)
{
/* declare unsigned to compare */
unsigned int i;
int sum;
	/* call structure */
	va_list = theList;

	if (n == 0)
	{
		return (0);
	}
	/* init */
	va_start(theList, n);
	/* walk the list */
	for (i = 0; i < n; i++)
	{
		sum += va_arg(theList, int);
	}
	va_end(the_list);

return (sum);
}
