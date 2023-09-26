#include "lists.h"

/**
 * pop_listint - Deletes the head of a listint_t linked list
 * @head: Head of list
 *
 * Return: Head node's data (n).
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	data = temp->n;

	*head = (*head)->next;
	free(temp);

	return (data);

}
