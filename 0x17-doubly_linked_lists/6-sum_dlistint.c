#include "lists.h"

/**
 * sum_dlistint - Return the sum of all the data (n) of a linked list
 * @head: Pointer to the head of the list
 *
 * Return: Sum of all the data (n)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *current = head;

	sum = 0;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
