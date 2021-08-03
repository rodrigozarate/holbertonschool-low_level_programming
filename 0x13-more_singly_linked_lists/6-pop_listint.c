/*
* 6-pop_listint.c - pop list
* Author: Rodrigo Zárate Algecira
* Date: August 03, 2021
*/

#include "lists.h"

/**
* free_listint - free list
* @head: Pointer
* Return: void
*/

int pop_listint(listint_t **head)
{
	listint_t *nodenext, *verbatim;
	int i;
	/* copy info */
	verbatim = *head;
	/* set i */
	if (verbatim == NULL)
	{
		return (0);
	}
	else
	{
		i = verbatim->n;
	}
	/* walk list */
	while (verbatim)
	{
		/* assign */
		nodenext = verbatim->next;
		/* free item by item */
		free(verbatim);
		/* move to next */
		verbatim = nodenext;
	}
return (i);
}
