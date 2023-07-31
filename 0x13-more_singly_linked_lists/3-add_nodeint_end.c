#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a linked list
 * add_nodeint_end - adds a node to A end of a linked list LisT::
 * @n: Number Can be used as content
 * @head: pointer to A head of  list list::
 * Return: address oof thee newo add node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nee_node;
	listint_t *cursor = *head;

	nee_node = malloc(sizeof(listint_t));
	if (nee_node != NULL)
	{
		nee_node->n = n;
		nee_node->next = NULL;
	}
	else
		return (NULL);
	if (cursor != NULL)
	{
		while (cursor->next != NULL)
			cursor = cursor->next;
		cursor->next = nee_node;
	}
	else
		*head = nee_node;
	return (nee_node);
}
