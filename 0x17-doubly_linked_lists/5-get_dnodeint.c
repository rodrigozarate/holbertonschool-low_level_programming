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
	unsigned int compareindex;

	/* loop to traverse until find match */
	for (compareindex = 0; compareindex < index; compareindex++)
	{
		if (head->next != NULL)
		{
			head = head->next;
		}
	}
	/* compare is minor than searched index */
	if (compareindex < index)
		return (NULL);
	/* in range */
	return (head);
}
