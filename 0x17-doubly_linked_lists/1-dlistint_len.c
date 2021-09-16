/*
* 1-dlistint_len.c - Return node in double linked list
* Author: Rodrigo Zárate Algecira
* Date: September 16, 2021
*/

#include "lists.h"

/**
* dlistint_len - Prints node in double linked list
* @h: pointer
* Return: returns the number of elements in a linked list
*/

size_t dlistint_len(const dlistint_t *h)
{
	/* The same as before but no print */
	size_t sum  = 0;
	int i = 0;

	for (i = 0; h != NULL; i++)
	{
		sum += 1;
		h = h->next;
	}
	return (sum);
}
