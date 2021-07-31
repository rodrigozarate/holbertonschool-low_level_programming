/*
* 4-free_list.c - Free list
* Author: Rodrigo Zárate Algecira
* Date: July 30, 2021
*/

#include "lists.h"

/**
* free_list - Free thats it...
* @head: pointer
* Return: void
*/

void free_list(list_t *head)
{
list_t *validate, *list;

list = head;
	while (list != NULL)
	{
	/* move one step */
	validate = list-next;
	free(list->str);
	free(list);
	/* move to next step */
	list = validate;
	}

}
