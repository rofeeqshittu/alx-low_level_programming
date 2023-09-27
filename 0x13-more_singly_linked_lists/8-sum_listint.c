#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of a listint_t linked list
 * @head: Head of the list
 *
 * Return: Sum of the all data
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *current;

	if (head == NULL)
		return (0);

	sum = 0;
	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
