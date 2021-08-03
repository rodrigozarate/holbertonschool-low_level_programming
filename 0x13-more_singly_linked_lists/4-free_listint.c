/**
* 4-free_listint.c - free list
* Author: Rodrigo Zárate Algecira
* Date: August 03, 2021
*/

#include "lists.h"

/**
* free_listint - free list
* @head: Pointer
* Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *nodenext, *verbatim;
	/* copy info */
	verbatim = head;
	/* walk list */
	while (verbatim)
	{
		/* assign */
		nodenext = verbatim->next;
		/* free item by item */
		free(verbatim);
		/ move to next */
		verbatim = nodenext;
	}
}
