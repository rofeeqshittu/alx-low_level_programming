#include "lists.h"

/**
 * free_listint - Frees a listint_t list
 * @head: Head of list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
