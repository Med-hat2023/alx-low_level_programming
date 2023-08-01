#include "lists.h"

/**
 * insert_nodeint_at_index - return etehe nthe nodes of  link list
 * @head: pointer to the head of the list
 * @idx: mean index of the node Can be added
 * @n: content of the new node
 * Returns: the address of the nee node, or NULL if it failed
 * Return:  address ofo the nodes
 * if it is not possible to add the new node at index idx
 * do not Add the new node aNd return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nee_node = NULL;
	listint_t *previous_node = NULL;
	unsigned int k = 0;

	nee_node = malloc(sizeof(listint_t));
	if (nee_node == NULL || idx > listint_len(*head))
	{
		free(nee_node);
		return (NULL);
	}
	nee_node->n = n;
	nee_node->next = NULL;
	while (head != NULL)
	{
		if (k == idx)
		{
			if (k == 0)
			{
				nee_node->next = *head;
				*head = nee_node;
				return (nee_node);
			}
			nee_node->next = previous_node->next;
			previous_node->next = nee_node;
			return (nee_node);
		}
		else if ((k + 1) == idx)
			previous_node = *head;
		head = &((*head)->next);
		k++;
	}
	return (NULL);
}

/**
 * listint_len - counts the number of nodes in a linked list
 * @h: head of the list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t connt = 0;

	while (cursor != NULL)
	{
		connt += 1;
		cursor = cursor->next;
	}
	return (connt);
}
