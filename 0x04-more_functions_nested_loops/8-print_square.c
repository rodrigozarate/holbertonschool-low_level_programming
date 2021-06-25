#include "holberton.h"

/**
* print_square - Square of #
* @matrix: int
* Return: void
*/

void print_square(int matrix)
{
	int i, j;

	if (matrix > 0)
	{
		for (i = 0; i < matrix; i++)
		{
			for (j = 0; j < matrix; j++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
	else
/* in case matrix = 0 */
	_putchar('\n');
}
