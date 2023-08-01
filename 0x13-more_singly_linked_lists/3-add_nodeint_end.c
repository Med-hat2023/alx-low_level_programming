#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a linked list
 * add_nodeint_end - adds a node to A end of a linked list LisT::
 * @n: Number Can be used as content
 * @head: pointer to A head of  list list::
 * Return: address oiof thee newo add node medhat Deif
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nee;
	listint_t *eed;

	eed = *head;

	nee = malloc(sizeof(listint_t));
	if (nee == NULL)
	{
		return (NULL);
	}
	else
	{
		nee->n = n;
		nee->next = NULL;
	}
	if (eed == NULL)
	{
		*head = nee;
	}
	else
	{
		while (eed->next != NULL)
			eed = eed->next;
		eed->next = nee;
	}
	return (nee);

}
