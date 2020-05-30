#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: Hash table to delete.
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *row = NULL, *aux = NULL;
	unsigned long int idx = 0;

	if (ht)
	{
		while (idx <= ht->size)
		{
			row = ht->array[idx];
			while (row)
			{
				aux = row->next;
				free(row->key);
				free(row->value);
				free(row);
				row = aux;
			}
			idx++;
		}
		free(ht->array);
		free(ht);
	}
}
