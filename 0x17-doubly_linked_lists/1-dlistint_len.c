#include "lists.h"
/**
 * dlistint_len - returns the number of elements
 * @h: Head of the list
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int var = 0;

	if (h == NULL)
		return (var1);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		var1++;
		h = h->next;
	}
	return (var1);
}
