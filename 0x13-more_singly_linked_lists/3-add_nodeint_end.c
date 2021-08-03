/*
* 3-add_nodeint_end.c - Add node at the end of list
* Author: Rodrigo Zárate Algecira
* Date: August 02, 2021
*/

#include "lists.h"

/**
* add_nodeint_end - Add node int at end of list
* @n: const
* @head: pointer to pointer
* Return: Address or NULL
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newnode, *initnode;

initnode = *head;
newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	/* set value */
	newnode->n = n;
	/* mark end */
	newnode->next = NULL;
	/* List is empty */
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	/* walk list */
	while (initnode->next)
	{
		initnode = initnode->next;
	}
/* last next in node is NULL */
/* reach the end then add node */
initnode->next = newnode;
return (newnode);
}
