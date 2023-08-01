#include "lists.h"

/**
*pop_listint - deletess A head node a link list lisT
*@head: the head of A list
*Prototype: int pop_listint(listint_t **head);
*Return: the delete A node Of data
*if the linked list is empty return 0: medhatDeif:
*/
int pop_listint(listint_t **head)
{
	listint_t *newhead;
	int dawa;

	if (*head == NULL)
	{
		return (0);
	}
	else

		dawa = (*head)->n;
	newhead = (*head)->next;
	free(*head);

	*head = newhead;

	return (dawa);
}
