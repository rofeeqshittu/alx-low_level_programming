#include "lists.h"

/**
 * add_node - Adds a node at the beginning of a list_t list.
 * @head: Head of the list
 * @str: String to add
 *
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *lk = (list_t *) malloc(sizeof(list_t));

	if (lk == NULL)
		return (NULL);

	lk->str = strdup(str);
	if (lk->str == NULL)
	{
		free(lk);
		return (NULL);
	}

	lk->len = strlen(str);
	lk->next = *head;
	*head = lk;

	return (lk);
}
