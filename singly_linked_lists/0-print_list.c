#include "lists.h"

/**
 * print_list - Entry point
 * Description: 'prints all elements of a list_t list'
 *
 * @h: pointer pointing to list
 * Return: 0 (Success)
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h->next != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
		}
		count++;
	}
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%u] %s\n", h->len, h->str);
	}
	count++;
	return (count);
}
