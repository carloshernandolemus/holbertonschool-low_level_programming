#include "hash_tables.h"
/**
 * key_index - Function that gives you the index of a key
 * with the djb2 algorithm
 * @key: Is the key of data
 * @size: The size of the array of the hash table
 *
 * Return:  The index at which the key/value
 * On error: 0 inapropiate entry
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!key || !*key || size == 0)
		return (0);

	return (hash_djb2(key) % size);
}
