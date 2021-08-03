/*
* 8-sum_listint.c - sum nodes
* Author: Rodrigo Zárate Algecira
* Date: August 03, 2021
*/

#include "lists.h"

/**
* sum_listint - sum nodes
* @head: Pointer
* Return: int sum or ZERO
*/

int sum_listint(listint_t *head);
{

int n = 0;

	if (head == NULL)
		return (0);

	while (head->next)
	{
		head = head->next;
		n += head->n;
	}

return (n);
}
