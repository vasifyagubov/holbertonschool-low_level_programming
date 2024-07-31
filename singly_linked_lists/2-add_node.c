#include <stdio.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: header node of singly linked list
 * @str: string
 * Return: A number of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int count = 0;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	
	while (str[count] != '\0')
	{
		count++;
	}

	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);

	}
	new->len = count;
	new->next = *head;

        *head = new;

	return (*head);
}

