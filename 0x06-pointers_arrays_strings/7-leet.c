/*
* File: 7-leet.c
* Author: Rodrigo Zárate Algecira
* Date: Friday 02 july 2021
*/

#include "holberton.h"
#include <stdio.h>

/**
* leet - encode to leet.
* @k: the string to be evaluated.
* Return: the pointer to dest
*/

char *leet(char *k)
{
int i = 0;
int m;
/* define patterns"
char numpat[] = "43071";
char lowpat[] = "aeotl";
char upppat[] = "AEOTL";
/* walk string */
	while (k[i])
	{
		for (m = 0; m <= 4; m++)
		/* walk on any case in each character */
			if (k[i] == lowpat[m] || k[i] == uppat[m])
			{
			/* if matches low or up pat replace */
				k[i] = numpat[m];
			}
		i++;
	}
return (k);
}
