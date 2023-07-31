#include "lists.h"

/**
 * listint_len - connts number on nodes of A linke lists
 * @h: A pointer to the head of the linked list
 * Return: number the element
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
