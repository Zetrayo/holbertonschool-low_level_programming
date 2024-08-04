#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node - add a new node at the beginning of `list_t` list
 * @head: double pointer to head
 * @data: string to be saved in new node, must be duplicated
 * Return: Address of new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *data)
{
	list_t *new_node = malloc(sizeof(list_t));
	int i = 0;

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(data);
	while (new_node->str[i] != '\0')
	{
		i++;
	}
	new_node->next = (*head);
	new_node->len = i;
	(*head) = new_node;
	return (new_node);
}
