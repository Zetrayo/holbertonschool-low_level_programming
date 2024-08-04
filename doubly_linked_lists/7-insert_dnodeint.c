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
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *thead = *head, *thead2;
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
		thead->prev = new_node;
		*head = new_node;
		return (new_node);
	}
	while (i != index)
	{
		thead = thead->next; 
		i++;
		if (thead == NULL)
		{
			return (NULL);
        }
    }
	if (thead->next == NULL)
	{
		new_node->next = NULL;
		new_node->prev = thead;
		thead->next = new_node;
		return (new_node);
	}
	thead2 = thead->prev;
	new_node->next = thead;
	new_node->prev = thead2;
	thead->prev = new_node;
	thead2->next = new_node;
	return (new_node);
}
