#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_listint - Free the list
 * @head: head of the list.
 * Return: Return void
 */
void free_listint(listint_t *head)
{
	listint_t *var1;

	while ((var1 = head) != NULL)
	{
		head = head->next;
		free(var1);
	}
}
