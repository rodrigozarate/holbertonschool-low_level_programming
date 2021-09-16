/*
* 6-sum_dlistint.c - Return the sum of nodes
* Author: Rodrigo Zárate Algecira
* Date: September 16, 2021
*/

#include "lists.h"

/**
* sum_dlistint - Return the sum of nodes
* @head: pointer
* Return: int
*/

int sum_dlistint(dlistint_t *head)
{
int sum = 0;
/* walk the nodes */
	while (head != NULL)
	{
		/* sum each node */
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
