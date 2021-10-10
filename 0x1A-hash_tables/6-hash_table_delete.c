/*
* 6-hash_table_delete.c - Delete Hash table
* Author: Rodrigo Zárate Algecira
* Date: October 8, 2021
*/

#include "hash_tables.h"

/**
* hash_table_delete - delete ht
* @ht: structure
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	if (!ht || !ht->array || !ht->size)
	{
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			node = ht->array[i]->next;
			free(ht->array[i]->value);
			free(ht->array[i]->key);
			free(ht->array[i]);
			ht->array[i] = node;
		}
	}
	free(ht->array);
	ht->size = 0;
	ht->array = NULL;
	free(ht);
}
