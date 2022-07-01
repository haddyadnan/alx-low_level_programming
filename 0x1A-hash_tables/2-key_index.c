#include "hash_tables.h"

/**
 * key_index - Gives the index of the key
 *
 * @key: key
 * @size: size of the array hash table
 * Return: unsigned long int
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
