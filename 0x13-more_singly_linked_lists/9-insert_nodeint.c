#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - Insert a node in the index
 * @head: Pointer head
 * @idx: Index
 * @n: Integer
 * Return: New address return
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *var1, *node;

	if (head == NULL)
	{
		return (NULL);
	}
	var1 = *head;
	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
	}
	else
	{
		idx--;
		while (idx > 0 && var1 != NULL)
		{
			var1 = var1->next;
			idx--;
		}
		if (var1 == NULL)
		{
			free(node);
			return (NULL);
		}
		node->next = var1->next;
		var1->next = node;
	}
	return (node);
}
