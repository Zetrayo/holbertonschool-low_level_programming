#include "lists.h"

/**
 * insert_dnodeint_at_index - Entry point
 * Description: 'adds a node to a dnodeint_t list'
 *
 * @head: pointer pointing to list
 * @data: pointer pointing to what needs to be added
 * @index: where we want to add the node
 * Return: 0 (Success)
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int index, int data)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *thead = *head;
	unsigned int i = 0;

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = data;
	if (index == 0)
	{
		new_node->next = thead;
		new_node->prev = NULL;
        *head = new_node;
		return (new_node);
	}
	while (i != index)
	{
		thead = thead->next; 
		i++;
	}
	new_node->next = thead->next;
	new_node->prev = thead;
	thead = new_node->prev;
	thead->next = new_node;
	if (new_node->next != NULL)
	{
		thead = new_node->next;
		thead->prev = new_node;
	}
    *head = new_node;
	return (new_node);
}
