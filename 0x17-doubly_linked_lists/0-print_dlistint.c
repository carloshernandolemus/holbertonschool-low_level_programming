#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a double list
 * @h: Head of the list
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int var1 = 0;

	if (h == NULL)
		return (var1);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		var1++;
		h = h->next;
	}
	return (var1);
}
