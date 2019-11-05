#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * pop_listint - Pop list function
 * @head: head of the list.
 * Return: Return void
 */
int pop_listint(listint_t **head)
{
	listint_t *var1 = *head;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	n = var1->n;
	var1 = var1->next;
	free(*head);
	*head = var1;
	return (n);
}
