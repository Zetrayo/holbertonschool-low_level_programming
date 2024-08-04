#include "lists.h"

/**
 * add_dnodeint - Entry point
 * Description: 'adds a node to a dlistint_t list'
 *
 * @head: pointer pointing to list
 * @data: pointer pointing to what needs to be added
 * Return: 0 (Success)
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int data)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *prevy = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = data;
	new_node->next = (*head);
	new_node->prev = NULL;
	if (new_node->next != NULL)
	{
		prevy->prev = new_node;
	}
	(*head) = new_node;
	return (new_node);
}
