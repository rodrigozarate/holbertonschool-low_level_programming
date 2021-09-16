/*
* 0-print_dlistint.c - Prints node in double linked list
* Author: Rodrigo Zárate Algecira
* Date: September 16, 2021
*/

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_dlistint - Prints node in double linked list
* @h: pointer
* Return: Int numbers of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
/* Traverse nodes for each node sum */
	int i;
	size_t sum = 0;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
		sum++;
	}
return (sum);
}
