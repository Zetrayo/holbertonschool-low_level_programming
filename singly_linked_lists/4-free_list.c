#include "lists.h"

/**
 * free_list - Entry point
 * Description: 'frees list_t list'
 *
 * @head: pointer pointing to list head
 * Return: 0 (Success)
 */
void free_list(list_t *head)
{
	list_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
