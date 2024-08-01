#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a list.
 * @head: node.
 * @index: value.
 * Return: new node
 */


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int i = 0;

	while (node != head)
	{
		if (i == index)
		{
			return (node);

		}
		node = node->next;
		i++;
	}
	return (NULL);


}
