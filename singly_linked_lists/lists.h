#ifndef LISTH_H
#define LISTH_H

#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */

typdef struct list_s
{
        char *str;
        struct list_s *next;

} list_t;

/* Function prototypes */
size_t print_list(const list_t *h);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void __attribute__ ((constructor)) print_before_main();

#endif LISTS_H