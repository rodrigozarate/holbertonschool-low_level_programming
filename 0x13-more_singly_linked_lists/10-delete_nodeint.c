/*
* 10-delete_nodeint.c - delete node
* Author: Rodrigo Zárate Algecira
* Date: August 03, 2021
*/

#include "lists.h"

/**
* delete_nodeint_at_index - delete on index
* @head: Pointer pointer
* @index: Index
* Return: 1 on success -1 if fail
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nextnode, *tail;
	unsigned int i = 0;

	/* List empty */
	if (*head == NULL)
	{
		return (-1);
	}

	tail = *head;

	/* is first element */
	if (index == 0)
	{
		*head = tail->next;
		free(tail);
		return (1);
	}

	/* walk index */
	while (i < index && tail->next)
	{
		nextnode = tail;
		tail = tail->next;
		i++;
	}
	if (i < index)
		return (-1);

	nextnode->next = tail->next;
	free(tail);

	return (1);
}
