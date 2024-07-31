#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 * @head: header node of singly linked list
 * Return: free memory
 */

void free_list(list_t *head)
{
	list_t *first_node;
	list_t *second_node;

	first_node = head;

	while (first_node != NULL)
	{
		second_node = first_node->next;
		free(first_node->str);
		free(first_node);
		first_node = second_node;
	}

}
