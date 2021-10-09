/*
* 4-hash_table_get.c - Get Hash table
* Author: Rodrigo Zárate Algecira
* Date: October 8, 2021
*/

#include "hash_tables.h"

/**
* hash_table_get - get hash table value
* @ht: structure
* @key: char
* Return: node value or NULL
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *newnode;

	if (!ht || !key)
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key,  ht->size);
	newnode = ht->array[index];
	/* walk list */
	while (newnode)
	{
		if (strcomp(newnode->key, key) == 0)
		{
			return (newnode->value);
		}
		/* go to next */
		newnode = newnode->next;
	}
return (NULL);
}
