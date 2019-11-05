#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * listint_len - Function that prints elements
 * @h: List
 * Return: Number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t thor;

	thor = 0;
	while (h != NULL)
	{
		h = h->next;
		thor++;
	}
	return (thor);
}
