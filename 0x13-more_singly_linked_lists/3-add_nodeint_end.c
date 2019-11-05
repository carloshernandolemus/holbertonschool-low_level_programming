#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_nodeint_end - Prints the numbers of the from end
 * @head: Head of the list
 * @n: Numbers of the list
 * Return: Address or the end head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *var1;
	listint_t *rev;

	var1 = malloc(sizeof(listint_t));
	if (var1 == NULL)
	{
		return (NULL);
	}
	var1->n = n;
	var1->next = NULL;
	rev = *head;

	if (rev == NULL)
	{
		*head = var1;
	}
	else
	{
		while (rev->next != NULL)
			rev = rev->next;
		rev->next = var1;
	}
	return (*head);
}
