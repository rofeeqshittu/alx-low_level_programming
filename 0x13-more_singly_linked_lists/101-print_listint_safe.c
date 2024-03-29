#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t linked list, handles loop.
 * @head: Pointer to the head of the list.
 *
 * Return: Number of node in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head;
	const listint_t *fast = head;
	size_t count;

	if (head == NULL)
		exit(98);

	count = 0;
	while (fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;

		count++;

		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			exit(98);
		}
	}

	printf("[%p] %d\n", (void *)slow, slow->n);
	count++;

	return (count);
}
