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
	dlistint_t *newnode;
	int i;
	for (i = 0; i < idx and *h != NULL; i++)
	{
		/* check for range */
		/* if out of range exit */
		/* if cero insert at head */
		/* if equal end insert at end */
		/* get h->next and h->next->next */
		/* point prev to next AND next to Next->next */
	}
}
