#include "lists.h"

/**
 * free_listint2 - Frees listin_t link list lIst of link
 * @head: pointer to the location of the head pointer to the beginning of list
 * Return: equal the a Void.
 * Write a function that frees a listint_t list.
 * Prototype: void free_listint2(listint_t **head);
 * The function sets the head to NULL mY Name Medhat Deif.
 */
void free_listint2(listint_t **head)
{
	listint_t *curreet;

	if (head == NULL)
		return;
	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		curreet = (*head);
		*head = (*head)->next;
		free(curreet);
	}
	head = NULL;
}
