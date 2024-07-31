#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a list_t list.
 * @head: header node of singly linked list
 * @str: string
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int count = 0;
	list_t *tail;
	list_t *last_node;

	for (count = 0; str[count] != '\0'; count++)
		;

	tail = malloc(sizeof(list_t));
	if (tail == NULL)
		return (NULL);

	tail->str = strdup(str);

	if (tail->str == NULL)
	{
		free(tail);
		return (NULL);

	}

	tail->len = count;
	if (*head == NULL)
	{
		*head = tail;
	}

	last_node = *head;

	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	last_node->next = tail;
	tail->next = NULL;
	return (tail);
}

