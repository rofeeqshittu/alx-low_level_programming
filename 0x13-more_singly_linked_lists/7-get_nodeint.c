#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Head of the list
 * @index: Index of the node, starting at 0
 *
 * Return: NULL if node doesn't exit
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *current;

	current = head;

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}

	if (current == NULL)
		return (NULL);

	return (current);
}
