#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: Pointer of the head of the list
 *
 * Return: Size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size;
	listint_t *current, *temp;

	if (h == NULL || *h == NULL)
		return (0);

	size = 0;
	current = *h;
	while (current != NULL)
	{
		size++;
		temp = current;
		current = current->next;

		if (temp < current)
			free(temp);
		else
		{
			*h = NULL;
			return (size);
		}
	}

	*h = NULL;
	return (size);
}
