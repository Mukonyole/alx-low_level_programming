#include "lists.h"

/**
 * pop_listint - it deletes head node of a linked list.
 * @head: a pointer to first element in a list.
 * Return: head node’s data or 0 if linked list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);
	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (num);
}
