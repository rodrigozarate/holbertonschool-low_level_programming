#include "holberton.h"
  
/**
 * _isdigit - Digit verificator
 * @c: integer
 * Return: 0 or 1 on success
 */
int _isdigit(int c)
{
        if ((c >= 48) && (c <= 57))
        {
                return (1);
        }
        else
                return (0);
}
