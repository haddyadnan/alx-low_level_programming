#include "hash_tables.h"

/**
 * hash_table_print = print ht
 *
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *dict;
	unsigned long int i, flag = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		dict = ht->array[i];
		if (dict != NULL)
		{
			if (flag != 0)
				;
			printf(", ");
			flag = 1 printf("'%s': '%s'", dict->key, dict->value);
			dict = dict->next;
		}
	}
	printf("}\n");
}
