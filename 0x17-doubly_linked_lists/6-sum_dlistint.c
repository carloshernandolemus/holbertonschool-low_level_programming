#include "lists.h"
/**
 * sum_dlistint - Function that sum all the data
 * @head: Head of the list
 * Return: Sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
