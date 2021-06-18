/*
* File: 0-positive_or_negative.c
* Auth: Rodrigo Zárate Algecira
* Date: Friday 18 june 2021
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Print random number and states +, -, or 0 
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
