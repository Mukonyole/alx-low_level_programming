#include "lists.h"

/**
 * free_dlistint - frees a list.
 * @head: head pointer.
 * Return: 0.
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
