#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a listint_t list
 * @head: Head of list
 * @index: Index of list to delete
 *
 * Return: 1 if it succeed, -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *current = *head;
	listint_t *previous = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}


	count = 0;
	while (current != NULL && count < index)
	{
		previous = current;
		current = current->next;
		count++;
	}

	if (current == NULL)
		return (-1);

	previous->next = current->next;
	free(current);
	return (1);
}
