/*
* 7-get_nodeint.c - get node
* Author: Rodrigo Zárate Algecira
* Date: August 03, 2021
*/

#include "lists.h"

/**
* get_nodeint_at_index - get node on index
* @head: Pointer
* @index: Index
* Return: Pointer or NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *newnode;
unsigned int i = 0;


	newnode = head;
	if (newnode == NULL)
		return (NULL);

	while (i < index && newnode->next)
	{
		i++;
	}
	/* newnode = newnode->n; */
return (newnode);
}
