#include "lists.h"

/**
 * add_dnodeint_end - Entry point
 * Description: 'adds a node to a dnodeint_t list'
 *
 * @head: pointer pointing to list
 * @data: pointer pointing to what needs to be added
 * Return: 0 (Success)
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int data)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *prevy = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = data;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (prevy->next != NULL)
	{
		prevy = prevy->next;
	}
	prevy->next = new_node;
	new_node->prev = prevy;
	return (new_node);
}
