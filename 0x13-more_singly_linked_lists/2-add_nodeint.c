#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning of a link list lIST:::
 * @head: pointer to pointer head of A list LiStS:
 * @n: integer to be used as content:::
 * Return: Address of A new add :node:
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nee_node;

	nee_node = malloc(sizeof(listint_t));
	if (nee_node != NULL)
	{
		nee_node->n = n;
		nee_node->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		nee_node->next = *head;
	*head = nee_node;
	return (nee_node);
}
