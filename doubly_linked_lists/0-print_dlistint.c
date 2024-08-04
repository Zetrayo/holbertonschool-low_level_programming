#include "lists.h"

/**
 * print_dlistint - Entry point
 * Description: 'prints all elements of a dlistint_t list'
 *
 * @h: pointer pointing to list
 * Return: 0 (Success)
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h->next != NULL)
	{
		printf("%u\n", h->n);
		h = h->next;
		count++;
	}
	printf("%u\n", h->n);
	count++;
	return (count);
}
