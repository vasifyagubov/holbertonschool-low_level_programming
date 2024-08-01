#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - Bir dlistint_t bağlı listesindeki tüm verilerin toplamını döndürür.
 * @head: Listenin başına işaretçi.
 *
 * Return: Listenin tüm verilerinin toplamı veya liste boşsa 0.
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

