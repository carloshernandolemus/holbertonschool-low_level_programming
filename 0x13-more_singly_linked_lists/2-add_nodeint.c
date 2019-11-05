#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_nodeint - prints the nunbers of the elements
 * @head: List
 * @n: Integers
 * Return: Numbers in the list.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *var1;

	var1 = malloc(sizeof(listint_t));
	if (var1 == NULL)
	{
		return (NULL);
	}
	var1->n = n;
	var1->next = *head;
	*head = var1;
	return (*head);
}
