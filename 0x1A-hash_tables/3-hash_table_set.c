#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: Add or update the key/value to
 * @key: Is the key, key can not be an empty string
 * @value: Is the value with the key
 * Return: 1 on succes, 0 when fails
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long index;
	hash_node_t *new, *current;
	const unsigned char *keyGet = (const unsigned char *)key;

	if (!ht || !(ht->array) || !key || !*key || !value)
		return (0);

	index = key_index(keyGet, ht->size);
	current = ht->array[index];
	while (current && strcmp(current->key, key) != 0)
		current = current->next;

	if (!current)
	{
		new = malloc(sizeof(hash_node_t));
		if (!new)
			return (0);

		new->key = strdup(key);
		new->value = strdup(value);
		if (!(new->value) || !(new->key))
			return (0);

		new->next = ht->array[index];
		ht->array[index] = new;
	}
	else
	{
		current->value = strdup(value);
		if (!(current->value))
			return (0);
	}

	return (1);

}
