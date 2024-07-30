#include "lists.h"

/**
 * add_node - Entry point
 * Description: 'adds a node to a list_t list'
 *
 * @head: pointer pointing to list
 * @data: pointer pointing to what needs to be added
 * Return: 0 (Success)
 */
list_t *add_node(list_t **head, const char *data)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(data);
	new_node->len = strlen(data);
	new_node->next = (*head);
	(*head) = new_node;
	return (new_node);
}
