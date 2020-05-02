#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_dlistint - returns the sum of the list
 * @head: pointer to head
 * Return: sum of data or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
