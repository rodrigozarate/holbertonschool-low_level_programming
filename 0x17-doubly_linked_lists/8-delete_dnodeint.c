
#include "lists.h"

/**
* delete_dnodeint_at_index - Delete node at index
* @head: double pointer
* @index: int
* Return: -1 if error or 1 on succed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *firstnode;
	unsigned int i;
	unsigned int lenght = node_len(head);

	firstnode = *head;
	/* no node content */
	if (*head == NULL)
		return (-1);
	/* delete at start */
	if (index == 0)
	{
		firstnode = firstnode->next;
		free(*head);
		*head = firstnode;
		if (firstnode != NULL)
			firstnode->prev = NULL;
		/* EXITO */
		return (1);
	}
	for (i = 0; i <= index - 1; i++)
	{
		firstnode = firstnode->next;
		if (!firstnode)
			return (-1);
	}
	if (lenght - 1 == index)
	{
		firstnode->prev->next = NULL;
		free(firstnode);
		/* EXITO */
		return (1);
	}
	firstnode->prev->next = firstnode->next;
	firstnode->next->prev = firstnode->prev;
	free(firstnode);
	/* EXITO */
	return (1);
}

/**
* node_len - Count nodes
* @node: double pointer
* Return: int
*/

unsigned int node_len(dlistint_t **node)
{
	unsigned int length = 0;
	dlistint_t *firstnode;

	firstnode = *node;
	while (firstnode != NULL)
	{
	length += 1;
	firstnode = firstnode->next;
	}
	return (length);
}
