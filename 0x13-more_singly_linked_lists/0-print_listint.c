#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * print_listint - Function that pritns integers
 * @h: List
 * Return: Number of elements in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t thor;

	thor = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		thor++;
	}
	return (thor);
}
