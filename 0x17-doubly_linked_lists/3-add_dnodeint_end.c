/*
* 3-add_dnodeint_end.c - adds a new node at the end of a list
* Author: Rodrigo Zárate Algecira
* Date: September 16, 2021
*/

#include "lists.h"

/**
* add_dnodeint_end - Add node in double linked list at the end
* @head: pointer
* @n: value of node
* Return: new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *endnode;

	/* save initial position */
	endnode = *head;
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	/* empty node */
	if (*head == NULL)
	{
		newnode->next = NULL;
		newnode->prev = NULL;
		newnode->n = n;
		/* reset pos of head */
		*head = newnode;
		return (newnode);
	}
	/* traverse nodes in list */
	while (endnode->next)
	{
		endnode = endnode->next;
	}
	/*reach the end */
	endnode->next = newnode;
	newnode->next = NULL;
	newnode->prev = endnode;
	newnode->n = n;
	return (newnode);
}
