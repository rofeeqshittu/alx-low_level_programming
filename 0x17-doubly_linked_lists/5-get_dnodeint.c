#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: Pointer to a pointer to the head of the list
 * @index: Index
 *
 * Return: index nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	ssize_t count;

	count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current);

		current = current->next;
		count++;
	}

	return (NULL);
}
