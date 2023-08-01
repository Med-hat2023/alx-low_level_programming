#include "lists.h"

/**
 * reverse_listint - reverses A link list LiSt
 * @head: mEan head of eth A list
 * Prototype: listint_t *reverse_listint(listint_t **head);
 * You are not allowed to use more than 1 loop.
 * You are not allowed to use malloc, free or array
 * You can only declare a maximum of two variables in your function
 * Return: first node of Eth reversed A nodeS
 * medhatdeif::
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_node = NULL;
	listint_t *prev_node = NULL;

	if (head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next_node;
	}
	*head = prev_node;
	return (*head);
}
