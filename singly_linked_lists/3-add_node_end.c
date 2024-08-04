#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * add_node_end - add a new node at the end of `list_t` list
 * @head: double pointer to head
 * @data: string to duplicate into new node
 * Return: Address of the new element or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *data)
{
	list_t *current;
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
	new_node->len = i;
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new_node;
	return (new_node);
}
