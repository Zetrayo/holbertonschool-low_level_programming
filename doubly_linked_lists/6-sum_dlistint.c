#include "lists.h"

/**
 * sum_dlistint - Entry point
 * Description: 'sums a dlistint_t list'
 *
 * @head: pointer pointing to list head
 * Return: 0 (Success)
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	while (head != NULL)
	{
		i = i + head->n;
		head = head->next;
	}
	return (i);
}
