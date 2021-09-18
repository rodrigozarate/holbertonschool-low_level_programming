/*
* 7-insert_dnodeint.c - Insert node at index
* Author: Rodrigo Zárate Agecira
* Date: September 16, 2021
*/

#include "lists.h"

/**
* insert_dnodeint_at_index - Insert node at index
* @h: double pointer
* @idx: index
* @n: value
* Return: node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *firstnode, *newnode;
	unsigned int lenght = node_len(h);

	/* if cero insert at head */
	if (idx == 0)
		return (add_dnodeint(h, n));

	firstnode = *h;
	/* check for range */
	while (firstnode)
	{
		if (count == idx - 1)
			break;
		else if (count < idx - 1 && firstnode == NULL)
			return (NULL)
		firstnode = firstnode->next;
		count++;
	}

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	/* add at the end */
	if (lenght == idx)
		return (add_dnodeint_end(h, n));
	else if (lenght < idx)
		return (NULL)

	/* get here connect */
	firstnode->next->prev = newnode;
	newnode->next = firstnode->next;
	firstnode->next = newnode;
	newnode->prev = firstnode;
	newnode->n = n;
	return (newnode);
}

/**
* node_len - Count nodes
* @node: double pointer
* Return: int
*/

node_len(dlistint_t **node)
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
