#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - Sum all the data (n) of a dlistint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: Sum of all data in the list, or 0 if the list is empty.
 */


int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current;

	current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;

	}

	return (sum);
}

