#include "lists.h"

/**
 * get_dnodeint_at_index - Entry point
 * Description: 'function that returns the nth node of a dlistint_t linked list.'
 *
 * @head: pointer pointing to list head
 * @index: N° of node to return
 * Return: 0 (Success)
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && i != index)
	{
		head = head->next;
		i++;
	}
	if (head == NULL)
	{
		return (NULL);
	}
	return (head);
}
