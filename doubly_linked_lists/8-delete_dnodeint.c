#include "lists.h"

/**
 * delete_dnodeint_at_index - Entry point
 * Description: 'deletes a node in a dnodeint_t list'
 *
 * @head: pointer pointing to list
 * @index: where we want to add the node
 * Return: 0 (Success)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *thead = *head, *thead2;
	unsigned int i = 0;

	if (index == 0)
	{
		thead2 = thead->next;
		thead2->prev = NULL;
		*head = thead2;
		free(thead);
		return (1);
	}
	while (i != index && thead != NULL)
	{
		thead = thead->next; 
		i++;
	}
	if (thead == NULL)
	{
		return (-1);
	}
	if (thead->next == NULL)
	{
		free(thead);
		return (1);
	}
	thead2 = thead->next;
	thead = thead->prev;
	thead2->prev = thead;
	thead = thead->next;
	free(thead);
	thead = thead2->prev;
	thead->next = thead2;
	return (1);
}
