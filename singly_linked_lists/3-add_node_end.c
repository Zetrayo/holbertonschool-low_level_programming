#include "lists.h"

/**
 * add_node_end - Entry point
 * Description: 'adds a node to a list_t list'
 *
 * @head: pointer pointing to list
 * @data: pointer pointing to what needs to be added
 * Return: 0 (Success)
 */
list_t *add_node_end(list_t **head, const char *data)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *last = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(data);
	new_node->len = strlen(data);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (NULL);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_node;
    return (*head);
}
