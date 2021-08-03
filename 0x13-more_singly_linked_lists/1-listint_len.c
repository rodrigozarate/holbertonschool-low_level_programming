/*
* 1-listint_len.c - Print number of elements
* Author: Rodrigo Zárate Algecira
* Date: August 02, 2021
*/

#include "lists.h"

/**
* listint_len - Print len
* @h: const pointer
* Return: size_t
*/

size_t listint_len(const listint_t *h)
{
int i;
size_t howmany = 0;
/*walk the list */
	for (i = 0; h; i++)
	{
	h = h->next;
	howmany++;
	}
return (howmany);
}
