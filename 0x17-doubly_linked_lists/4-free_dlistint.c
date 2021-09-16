/*
* 4-free_dlistint.c - Free node in double linked list
* Author: Rodrigo Zárate Algecira
* Date: September 16, 2021
*/

#include "lists.h"

/**
* free_dlistint - Free node in double linked list
* @head: pointer
* Return: Void
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *firstnode, *validation;
	/* assing to head to traverse */
	firstnode = head;
	while (firstnode != NULL)
	{
		validate = firstnode->next;
		free(firstnode);
		/* move to the next */
		firstnode = validate;
	}
}
