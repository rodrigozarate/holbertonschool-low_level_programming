/*
* 6-hash_table_delete.c - Delete Hash table
* Author: Rodrigo Zárate Algecira
* Date: October 8, 2021
*/

#include "hash_tables.h"

/**
*
*
*
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	if (!ht || !ht->array || !ht->size)
	{
		return;
	}
	for ()
	{
		while ()
		{
			node = ht->array[i]->next;
		}
	}
	free(ht);
}
