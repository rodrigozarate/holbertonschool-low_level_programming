/*
* 0-print_listint.c - Print list
* Author: Rodrigo Zárate Algecira
* Date: July 23, 2021
*/

#include "lists.h"

/**
* print_listint - Print list of ints
* @h: const pointer
* Return: size_t
*/

size_t print_listint(const listint_t *h)
{
int i;
size_t howmany = 0;
/*walk the list */
	for (i = 0; h; i++)
	{
		printf("%i\n", h->n);
	h = h->next;
	howmany++;
	}
return (howmany);
}
