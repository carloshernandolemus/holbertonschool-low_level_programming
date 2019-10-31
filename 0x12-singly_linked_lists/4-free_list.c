#include "lists.h"

/**
 * free_list - Free the list
 * @head: head of the list.
 * Return: Return void
 */

void free_list(list_t *head)
{
	list_t *thor;

	while ((thor = head) != NULL)
	{
		head = head->next;
		free(thor->str);
		free(thor);
	}
}
