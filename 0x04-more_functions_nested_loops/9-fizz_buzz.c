#include<stdio.h>

/**
* main - Fizz if 5 buzz if 3
*
* Return: void
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (((i % 5) == 0) && ((i % 3) == 0))
		{
/* both */
			printf("FizzBuzz");
		}
		else if ((i % 5) == 0)
		{
/* just 5 */
			printf("Buzz");
		}
		else if ((i % 3) == 0)
		{
/* just 3 */
			printf("Fizz");
		}
		else
		{
			printf("%i", i);
		}
		if (i < 100)
		printf(" ");
	}
	printf("\n");
	return (0);
}
