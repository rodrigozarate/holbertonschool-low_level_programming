#include "main.h"

/**
* howlong - long of binary
* @hl: char
* Return: int
*/

int howlong(const char *hl)
{
int i;
	for (i = 0; hl[i] != '\0'; i++)
	{
		;
	}
return (i);
}

/**
* binary_to_uint - Convert binary to int
* @b: char
* Return: int
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int theint = 0;
unsigned int theformat = 1;
unsigned int howlongis;
int i;
	if (b == NULL)
		return (0);

	howlongis = howlong(b);

	for (i = howlongis - 1; i >= 0; i--)
	{
		/* not binary */
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
		{
			theint += theformat;
		}
	/* next number by 2 */
	theformat *= 2;
	}
return (theint);
}
