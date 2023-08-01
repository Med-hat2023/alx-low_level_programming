#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct listint_s - singly linked list
 * @n: mean the integer
 * @next: points to the next node
 * Don’t forget to push your header file
 * All your header files should be include guarded
 * Description: singly linked list node structure
 * for ALS proj
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

void free_listint2(listint_t **head);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
size_t print_listint(const listint_t *h);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
void free_listint(listint_t *head);
int pop_listint(listint_t **head);
int sum_listint(listint_t *head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
size_t print_listint_safe(const listint_t *head);
listint_t *find_listint_loop(listint_t *head);
size_t free_listint_safe(listint_t **h);
listint_t *reverse_listint(listint_t **head);


#endif /*LISTS_H*/
