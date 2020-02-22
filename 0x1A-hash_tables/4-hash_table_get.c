#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - Function that retrieves a value with a key.
 * @ht: Table to analize
 * @key: Key to analize
 * Return: The value with the element
 * On error: NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long index;
	const unsigned char *keyGet;
	hash_node_t *current;

	if (!ht || !key || !*key)
		return (NULL);

	keyGet = (const unsigned char *)key;
	index = key_index(keyGet, ht->size);

	current = ht->array[index];
	while (current && strcmp(current->key, key) != 0)
		current = current->next;

	return ((current) ? current->value : NULL);
}
