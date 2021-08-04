/*
* 9-insert_nodeint.c - insert node
* Author: Rodrigo Zárate Algecira
* Date: August 03, 2021
*/

#include "lists.h"

/**
* insert_nodeint_at_index - insert on index
* @head: Pointer
* @idx: Index
* @n: number
* Return: Pointer or NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *tail;
	unsigned int i = 0;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;

	if (*head == NULL)
	{
		*head = newnode;
		newnode->next = NULL;
		return (newnode);
	}
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	tail = *head;
	/* walk idx */
	while (i < (idx - 1) && tail->next)
	{
		tail = tail->next;
		i++;
	}
	if (i < idx - 1)
		return (NULL);

	newnode->next = tail->next;
	tail->next = newnode;

	return (newnode);
}
