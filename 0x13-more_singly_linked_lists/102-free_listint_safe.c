#include "lists.h"

/**
 * free_listint_safe - prints a list list list
 * @h: address of pointer to first node
 * This function can though the list only once
 * The function sets the head to NULL:Medhat Deif
 * Return: the the address of head medhat Deif::
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *tem;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			tem = (*h)->next;
			free(*h);
			*h = tem;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}

