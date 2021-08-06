#include "main.h"

/**
* clear_bit - clear bit at index
* @n: pointer unsigned long int
* @index: insigned int
* Return: int
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int mask = 1;

	/* index is not in range */
	if (index > (sizeof(n) * 8))
		return (-1);

/* shift to index */
/* put 1 at index pos */
mask <<= index;
/* invert mask */
mask = ~mask;

	/* pointer position */
	/* AND bitwise */
	/* mantain original 1's of n */
	/* set or mantain 0 at index pos */
	*n &= mask;

return (1);
}
