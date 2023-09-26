#include "lists.h"

/**
 * listint_len - Gets the number of elements in a linked listint_t list.
 * @h: Head
 *
 * Return: Number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	int i;
	const struct listint_s *p = h;

	i = 0;
	while (p != NULL)
	{
		p = p->next;
		i++;
	}

	return (i);
}
