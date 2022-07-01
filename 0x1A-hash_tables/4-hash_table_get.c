#include "hash_tables.h"

/**
 * hash_table_get - retrieves value assosciated with key
 *
 * @ht: hash table
 * @key: key
 * Return: char*
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t NewArr;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	NewArr = ht->array[index];

	for (; NewArr != NULL; NewArr = NewArr->next)
	{
		if (strcmp(NewArr->key, key) == 0)
			return (NewArr->value);
	}
	return (NULL);
}
