#include "lists.h"

/**
 * list_len - Entry point
 * Description: 'returns number of elements of a list_t list'
 *
 * @h: pointer pointing to list
 * Return: 0 (Success)
 */
size_t list_len(const list_t *h)
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
