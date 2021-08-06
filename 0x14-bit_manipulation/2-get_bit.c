#include "main.h"

/**
* get_bit - get bit at index
* @n: unsigned long int
* @index: insigned int
* Return: int
*/

int get_bit(unsigned long int n, unsigned int index)
{
	/* index is not in range */
	if (index > (sizeof(n) * 8))
		return (-1);
/* shift to index */
n >>= index;
	/* compare to get 1 */
	if ((n & 1) == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
