#include "main.h"

/**
* set_bit - set bit at index
* @n: pointer unsigned long int
* @index: insigned int
* Return: int
*/

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int mask = 1;

	/* index is not in range */
	if (index > (sizeof(n) * 8))
		return (-1);

/* shift to index */
/* put 1 only at index pos */
mask <<= index;

	/* pointer position */
	/* OR bitwise */
	/* mantain original 1's of n */
	/* set 1 at index pos */
	*n |= mask;

return (1);
}
