/*
* 5-get_dnodeint.c - returns the nth node of a dlistint_t linked list
* Author: Rodrigo Zárate Algecira
* Date: September 16, 2021
*/

#include "lists.h"

/**
* get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
* @head: pointer
* @index: int
* Return: Void
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int cindex;

	/* loop to traverse until find match */
	for (cindex = 0; cindex < index && head->next; cindex++)
	{
			head = head->next;
	}
	/* compare is minor than searched index */
	if (cindex < index)
		return (NULL);
	/* in range */
	return (head);
}
