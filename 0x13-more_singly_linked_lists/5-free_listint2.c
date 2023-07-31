#include "lists.h"

/**
 * free_listint2 - Frees listin_t linked list.
 * @head: pointer to the location of the head pointer to the beginning of list
 * Return: equal the a Void.
 * Prototype: void free_listint2(listint_t **head);
 * The function sets the head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;
	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		current = (*head);
		*head = (*head)->next;
		free(current);
	}
	head = NULL;
}
