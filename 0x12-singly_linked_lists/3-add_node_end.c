#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - Prints the elements and strings from end
 * @head: Head of the list
 * @str: String of the list
 * Return: Address or the head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *thor;
	list_t *rev;
	size_t thorchar;

	thor = malloc(sizeof(list_t));
	if (thor == NULL)
	{
		return (NULL);
	}
	thor->str = strdup(str);
	for (thorchar = 0; str[thorchar]; thorchar++)
	{
		;
	}
	thor->len = thorchar;
	thor->next = NULL;
	rev = *head;

	if (rev == NULL)
	{
		*head = thor;
	}
	else
	{
		while (rev->next != NULL)
			rev = rev->next;
		rev->next = thor;
	}
	return (*head);
}
