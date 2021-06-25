#include "holberton.h"

/**
* print_number - Print integer just with putchar
* @n: int
* Return: void
*/

void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -x;
	}
	if ((x / 10) > 0)
	{
	/* doit again */
		print_number(x / 10);
	}
	_putchar(x % 10 + '0');
}
