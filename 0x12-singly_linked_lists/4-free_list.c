#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - Free the list
 * @head: head of the list.
 * Return: Return void
 */

void free_list(list_t *head)
{
	list_t *thorlist;

	while ((thorlist = head) != NULL)
	{
		head = head->next;
		free(thorlist->str);
		free(thorlist);
	}
}
