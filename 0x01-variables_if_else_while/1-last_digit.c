/*
* File: 0-positive_or_negative.c
* Auth: Rodrigo Zárate Algecira
* Date: Friday 18 june 2021
*/

#include <stdio.h>
#include <time.h>

/**
* main - Prints the last digit of a random number 
* Return: Cero Always
*/

int main(void)
{
	int j;

	srand(time(0));
	j = rand() - RAND_MAX / 2;

	if ((j % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
			j, j % 10);
	}
	else if ((j % 10) < 6 && (j % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
			j, j % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n",
			j, j % 10);
	}

	return (0);
}
