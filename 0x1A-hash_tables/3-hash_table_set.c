/*
* 3-hash_table_set.c - Set Hash table
* Author: Rodrigo Zárate Algecira
* Date: October 8, 2021
*/

#include "hash_tables.h"

/**
* hash_table_set - set the hash table
* @ht: structure
* @key: char pointer
* @value: char value
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, size;
	hash_node_t *newnode, *tempnode;
	/* key cannot be empty */
	if (!key || !value || !ht)
	{
		return (0);
	}
	size = ht->size;
	index = key_index((const unsigned char *)key, size);
	tempnode = ht->array[index];
	while (tempnode)
	{
		/* if collition first node */
		if (tempnode && strcmp(key, tempnode->key) == 0)
		{
			free(tempnode->value);
			/* value strdup */
			tempnode->value = strdup(value);
			if (tempnode->value == NULL)
				return (0);

			return (1);
		}
		tempnode = tempnode->next;
	}
	newnode =malloc(sizeof(hash_node_t));
	if (newnode == NULL)
		return (0);

	newnode->key = strdup(key);
	if (newnode->key == NULL)
		return (0);

	newnode->value = strdup(value);
	if (newnode->value == NULL)
		return (0);

	newnode->next = ht->array[index];
	ht->array[index] = newnode;
return (1);
}
