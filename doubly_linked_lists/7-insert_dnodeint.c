#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of the list.
 * @head: A pointer to the head of the list.
 * @n: The integer data for the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i = 0;

	if (h == NULL)
	{
		return (NULL);

	}

	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;

	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;

	}

	if (current == NULL || (current->next == NULL && i < idx - 1))
		return (NULL);

	if (current->next ==  NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current->next;
	new_node->prev = current;

	if (current->next != NULL)
		current->next->prev = new_node;

	current->next = new_node;
	return (new_node);
}

