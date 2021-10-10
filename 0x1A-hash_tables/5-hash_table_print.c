/*
* 5-hash_table_print.c - Print Hash table
* Author: Rodrigo Zárate Algecira
* Date: October 8, 2021
*/

#include "hash_tables.h"

/**
* hash_table_print - print nodes of ht
* @ht: structure
* Return: void
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int flag = 0;

	if (!ht)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			while (ht->array[i])
			{
				if (flag != 0)
				{
					printf(", ");
				}
				printf("'%s': '%s'",
					ht->array[i]->key, ht->array[i]->value);
				flag = 1;
				ht->array[i] = ht->array[i]->next;
			}
		}
	}
	printf("}\n");
}
