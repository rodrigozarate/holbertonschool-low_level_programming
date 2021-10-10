/*
* 5-hash_table_print.c - Print Hash table
* Author: Rodrigo Zárate Algecira
* Date: October 8, 2021
*/

#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int flag = 0;

	if (!ht)
	{
		return;
	}
	for (i = 0; i <= ht->size; i++)
	{
		if (flag == 0)
		{
			printf("{");
		}
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
