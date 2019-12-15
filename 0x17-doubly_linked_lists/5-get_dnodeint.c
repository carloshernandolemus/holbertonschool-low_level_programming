#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: Head of the list
 * @index: Index of the nth node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int var1;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	var1 = 0;
	while (head != NULL)
	{
		if (var1 == index)
			break;
		head = head->next;
		var1++;
	}
	return (head);
}
