#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - returns the node of a list.
 * @head: pointer to head
 * @index: index
 * Return: Node or NULL if index does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmpcounter = head;
	unsigned int counter = 0;

	if (!head)
		return (NULL);

	while (tmpcounter)
		tmpcounter = tmpcounter->next, counter++;

	if (index > (counter - 1))
		return (NULL);

	for (counter = 0; counter < index; counter++)
		head = head->next;

	return (head);
}
