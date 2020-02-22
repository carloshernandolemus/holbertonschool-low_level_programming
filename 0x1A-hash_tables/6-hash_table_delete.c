#include <stdlib.h>
#include "hash_tables.h"

/**
 * free_content_at_index - Free linked list at given index
 * @ht: Hash table
 * @index: Position in the array to free
 * Return: 1 on success
 * On error: 0 on fail
 */

int free_content_at_index(hash_table_t *ht, unsigned long index)
{
	hash_node_t *current, *after;

	if (!ht || index >= ht->size)
		return (0);

	current = ht->array[index];
	for (; current; current = after)
	{
		after = current->next;
		free(current->value), free(current->key);
		free(current);
	}

	return (1);
}

/**
 * hash_table_delete - Function that deletes a hash table.
 * @ht: Hash table
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long i = 0;

	if (!ht)
		return;

	for (; i < ht->size; i++)
		if (ht->array[i])
			free_content_at_index(ht, i);

	free(ht->array);
	free(ht);
}
