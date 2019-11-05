#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * sum_listint - Function that sum integers in the list
 * @head: head of the list.
 * Return: Return void
 */
int sum_listint(listint_t *head)
{
	listint_t *var1 = head;
	int var2 = 0;

	while (var1)
	{
		var2 += var1->n;
		var1 = var1->next;
	}
	return (var2);
}
