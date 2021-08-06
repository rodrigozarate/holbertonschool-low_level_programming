#include "main.h"

/**
* flip_bits - calculate number of bits to change
* @n: unsigned long int
* @m: unsigned long int
* Return: unsigned int
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int compare;
unsigned int i = 0;

/* Compare numbers */
compare = n ^ m;
/* if bit is equal do nothing ZERO */
/* if bit is different add to count ONE */
	while (compare >= 1)
	{
		/* check for ONE */
		if ((compare & 1) == 1)
		{
			i++;
			/* shift next */
			compare >>= 1;
		}
	}
return (i);
}
