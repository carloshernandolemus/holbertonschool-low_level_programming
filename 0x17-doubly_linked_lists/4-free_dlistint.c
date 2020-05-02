#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - function that free a dlistint_t list.
 * @head: head of doubly linked list
 * Return: None
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
