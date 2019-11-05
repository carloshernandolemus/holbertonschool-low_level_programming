#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * get_nodeint_at_index - Pop list function
 * @head: head of the list.
 * Return: Return void
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *var1 = head;

	while (index > 0)
	{
		if (var1->next == NULL)
		{
			return (NULL);
		}
		var1 = var1->next;
		index--;
	}
	return (var1);
}
