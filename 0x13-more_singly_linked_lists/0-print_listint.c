#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of listint_t list.
 * @h: head
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;
	const struct listint_s *p = h;

	i = 0;
	while (p != NULL)
	{
		printf("%d\n", p->n);
		p = p->next;
		i++;
	}

	return (i);
}
