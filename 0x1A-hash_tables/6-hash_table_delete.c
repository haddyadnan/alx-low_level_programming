#include "hash_tables.h"

/**
 * hash_table_delete = delete hash tab;e
 *
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *NewArr, *dict;
	unsigned long int i;

	for (i; i < ht->size; i++)
	{
		NewArr = ht->array[i];
		if (NewArr != NULL)
		{
			dict = NewArr;

			free(dict->key);
			free(dict->value);
			free(dict);
		}
	}

	free(ht->array);
	free(ht);
}
