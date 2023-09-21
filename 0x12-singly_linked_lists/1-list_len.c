#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: Head of the list_t list
 *
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	int num;

	num = 0;
	while (h != NULL)
	{
		num++;
		h = h->next;
	}

	return (num);
}
