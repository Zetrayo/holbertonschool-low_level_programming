#include "lists.h"

/**
 * dlistint_len - Entry point
 * Description: 'returns the number of nodes of a dlistint_t list'
 *
 * @h: pointer pointing to list
 * Return: 0 (Success)
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h->next != NULL)
	{
		h = h->next;
		count++;
	}
	count++;
	return (count);
}
