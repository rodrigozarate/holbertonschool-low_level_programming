#include <stdio.h>

/**
* main - factor
*
* Return: 0
*/

int main(void)
{
	unsigned long int uli, i;

	uli = 612852475143;
	for (i = 3; i < (uli / 2); i = i + 2)
	{
		while ((uli % i == 0) && (uli != i))
		{
			uli = uli / i;
		}
	}
	printf("%lu\n", uli);
	return (0);
}
