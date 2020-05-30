#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"


/**
 * hash_table_delete - deletes a hash table
 * @ht: is the hastable
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *hr, *nxt;

	if (!ht)
		return;

	for (idx = 0; idx < ht->size; idx++)
	{
		hr = ht->array[idx];
		while (hr)
		{
			nxt = hr->next;
			free(hr->key);
			free(hr->value);
			free(hr);
			hr = nxt;
		}
	}

	free(ht->array);
	free(ht);
}
