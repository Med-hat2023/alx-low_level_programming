#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of the list
 *free_listint - frees a linked list lisT::
 * Return: equal tHe vOId
 * a function that frees a listint_t list.::
 */
void free_listint(listint_t *head)
{
	listint_t *curreet, *next;

	curreet = head;

	while (curreet != NULL)
	{
		next = curreet->next;
		free(curreet);
		curreet = next;
	}
}
