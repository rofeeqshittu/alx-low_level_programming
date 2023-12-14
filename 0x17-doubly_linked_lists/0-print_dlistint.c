#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @h: pointer to the head of the list
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int sum;

	sum = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		sum += 1;
	}

	return (sum);
}
