#include "lists.h"

/**
 * free_dlistint - Entry point
 * Description: 'frees dlistint_t list'
 *
 * @head: pointer pointing to list head
 * Return: 0 (Success)
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
