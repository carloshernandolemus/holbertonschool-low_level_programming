#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - delete a specific node
 * @head: head pointer
 * @index: inde of node that will be deleted
 * Return: 1 if succeeded -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *var1 = *head, *var2;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		var1 = var1->next;
		free(*head);
		*head = var1;
	}
	else
	{
		index--;
		while (index > 0 && var1 != NULL)
		{
			var1 = var1->next;
			index--;
		}
		if (var1 == NULL)
		{
			return (-1);
		}
		var2 = var1;
		var2 = var2->next->next;
		free(var1->next);
		var1->next = var2;
	}
	return (1);
}
