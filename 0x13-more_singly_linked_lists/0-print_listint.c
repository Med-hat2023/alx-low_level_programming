#include "lists.h"

/**
 * print_listint - Print into list-
 * @h: pointer to main list
 * Return: Numbers of nodes.
 * Format: please see the example
 * You are allowed to use printf
 */
size_t print_listint(const listint_t *h)
{
	size_t counteer = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counteer++;
	}
	return (counteer);
}
