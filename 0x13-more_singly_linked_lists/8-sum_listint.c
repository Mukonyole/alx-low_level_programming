#include "lists.h"

/**
 * sum_listint - returns sum of all data in a linked list.
 * @head: the first node in a list.
 * Return: the sum, otherwise 0 if list is empty.
 */


int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
