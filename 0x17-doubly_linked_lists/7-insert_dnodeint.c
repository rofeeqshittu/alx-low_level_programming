#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to a pointer to the head of a list
 * @idx: Index
 * @n: Data (n) to add
 *
 * Return: Address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	count = 0;

	/* Insertion at the beginning */
	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = current;
		if (current != NULL)
			current->prev = new_node;
		*h = new_node;
		return (new_node);
	}


	while (current != NULL)
	{
		if (count == idx)
		{
			new_node->prev = current->prev;
			new_node->next = current;

			if (current->prev != NULL)
				current->prev->next = new_node;

			current->prev = new_node;
			return (new_node);
		}
		count++;
		current = current->next;
	}


	/* Insertion at the end of the list */
	if (count == idx)
	{
		new_node->prev = current->prev;
		new_node->next = NULL;

		if (current->prev != NULL)
			current->prev->next = new_node;

		current->prev = new_node;
		return (new_node);
	}

	/* Case: Index out of bounds */
	free(new_node);
	return (NULL);
}
