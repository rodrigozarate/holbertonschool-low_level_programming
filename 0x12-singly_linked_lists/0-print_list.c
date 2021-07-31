/*
* 0-print_list.c - Print list
* Author: Rodrigo Zárate Algecira
* Date: July 30, 2021
*/

#include "lists.h"

/**
* print_list - Prints elements in list
* @h: pointer to const list
* Return: number of nodes
*/

size_t print_list(const list_t *h)
{

int i;
const list_t *dt = h;
size_t howmany = 0;
/* walk list */
	for (i = 0; dt; i++)
	{
		if (dt->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", dt->len, dt->str);
		}
	dt = dt->next;
	howmany++;
	}
return (howmany);
}
