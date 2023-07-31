#include "lists.h"

/**
 * print_listint - prints All the elements of A linked list
 * @h: head of the list
 *
 * Return:number of Nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t connt = 0;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		count += 1;
		cursor = cursor->next;
	}
	return (connt);
}
