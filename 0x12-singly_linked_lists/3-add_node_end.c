#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Head of list_t list
 * @str: String
 *
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lk = (list_t *) malloc(sizeof(list_t));
	list_t *lkl = *head;

	if (lk == NULL)
		return (NULL);

	lk->str = strdup(str);
	if (lk->str == NULL)
	{
		free(lk);
		return (NULL);
	}

	lk->next = NULL;
	lk->len = strlen(str);

	if (*head == NULL)
		*head = lk;
	else
	{
		while (lkl->next != NULL)
			lkl = lkl->next;

		lkl->next = lk;
	}


	return (lk);
}
