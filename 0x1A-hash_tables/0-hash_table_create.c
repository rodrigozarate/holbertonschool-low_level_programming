/*
* 0-hash_table_create.c - create Hash table
* Author: Rodrigo Zárate Algecira
* Date: October 8, 2021
*/

/**
* hash_table_create - create Hash table
* @size: unsigned long int
* Return: pointer or NULL
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable;

	hashtable = malloc(sizeof(hash_table_t));
	if (!hashtable)
	{
		return (NULL);
	}
	hashtable->size = size;
	hashtable->array = malloc(sizeof(hashtable->array) * size);
	if (!hashtable->array)
	{
		return (NULL);
	}
return (hashtable);
}
