#include "lists.h"

/**
 * dllistint_len - Returns number of elements in a list
 * @h: pointer to the head of the list
 *
 * Return: Number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	ssize_t sum;

	sum = 0;
	while (h != NULL)
	{
		h = h->next;
		sum += 1;
	}

	return (sum);
}
