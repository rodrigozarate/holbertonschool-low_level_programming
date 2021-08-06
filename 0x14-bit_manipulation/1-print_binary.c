#include "main.h"

/**
* print_binary - prints the binary
* @n : unsigned int
*/

void print_binary(unsigned long int n)
{
	/* got more digits */
	if (n > 1)
		/* recursion */
		/* shift next */
		print_binary(n >> 1);
	/* Print first case */
	_putchar((n & 1) + '0');
}
