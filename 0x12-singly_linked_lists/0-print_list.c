#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_list - Prints all the elements of a list_t list
 * @h: Head of the list_t list
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num_nodes;

	num_nodes = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		num_nodes++;
	}

	return (num_nodes);
}
