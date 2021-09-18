/*
* 2-add_dnodeint.c - adds a new node at the beginning of a list
* Author: Rodrigo Zárate Algecira
* Date: September 16, 2021
*/

#include "lists.h"

/**
* add_dnodeint - Add node in double linked list
* @head: pointer
* @n: value of node
* Return: new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n);
{
	/* find head and insert */
	/* cretae new node */
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	/* goes wrong */
	if (newnode == NULL)
		return (NULL);
	/* set head */
	newnode->prev = NULL;
	/* point to prev head */
	newnode->next = *head;
	/* set value */
	newnode->n = n;

	/* head is valid */
	if (*head != NULL)
		(*head)->prev = newnode;
	/* reset pointer head */
	*head = newnode;
	return (newnode);
}
