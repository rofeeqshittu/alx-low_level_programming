#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: Head of list_t list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *current = head;

		head = head->next;

		free(current->str);
		free(current);
	}
}
