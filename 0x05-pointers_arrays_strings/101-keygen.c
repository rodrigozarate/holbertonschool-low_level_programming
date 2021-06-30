/*
* File: 101-keygen.c
* Author: Rodrigo Zárate Algecira
* Date: Tuesday 29 june 2021
*/

#include "holberton.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
* main - Random keygenerator.
* Return: void
*/

int main(void)
{
/* seed random with time */
srand(time(0));
/* set ascii min limit */
int x;
x  = 32;
/* set ascii max limit */
int y;
y = 122;
/* set lenght */
int z, a, k;
z  = 50;
a = 0;
char p[50];

	while (a < z)
	{
	/* count to z limit */
		k = rand() % 100;
			/* check if is in valid ascii range */
			if(k >= x && k <= y)
			{
			p[a] = k;
			a++;
			}
	}
	p[a] = '\0';
	printf("%s", p);
	return (0);
 }
