#include "lists.h"

/**
 *pop_listint - deletess A head node a link list lisT
 *@head: the head of A list
 *::::::list
 *Return: the delete A node Of data
 */

int pop_listint(listint_t **head)
{
	listint_t *popped;
	int mEd;

	if (*head == NULL)
		return (0);

	popped = *head;
	mEd = popped->n;
	free(popped);

	*head = (*head)->next;
	return (mEd);
}
