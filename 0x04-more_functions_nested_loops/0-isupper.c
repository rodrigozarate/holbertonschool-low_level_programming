#include "holberton.h"

/**
 * _isupper - Uppercase character verificator
 * @c: integer
 * Return: 0 or 1 on success
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
		return (0);
}
