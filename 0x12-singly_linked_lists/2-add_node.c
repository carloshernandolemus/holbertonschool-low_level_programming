#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - prints the elements and strings
 * @head: List
 * @str: String
 * Return: Number of elements in the list.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *thor;
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
	thor->next = *head;
	*head = thor;
	return (*head);
}
