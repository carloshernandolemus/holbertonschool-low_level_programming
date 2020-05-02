#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node
 * @h: pointer to head
 * @idx: index
 * @n: value in the node
 *
 * Return: address to new node or NULL if not possible to insert
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmpcounter = *h, *tmp1 = *h, *tmp2;
	unsigned int counter = 0;

	if (!h)
		return (NULL);
	while (tmpcounter)
		tmpcounter = tmpcounter->next, counter++;
	if (idx > counter)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL, new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	for (counter = 0; counter < idx; counter++)
		tmp2 = tmp1, tmp1 = tmp1->next;

	new_node->next = tmp1;
	new_node->prev = tmp2;
	tmp2->next = new_node;
	if (tmp1)
		tmp1->prev = new_node;

	return (new_node);
}
