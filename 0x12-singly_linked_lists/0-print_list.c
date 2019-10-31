#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * print_list - prints the elements and strings
 * @h: List
 * Return: Number of elements in the list.
 */
size_t print_list(const list_t *h)
{
	size_t thor;
	thor = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			}
		h = h->next;
		thor++;
	}
	return (thor);
}
