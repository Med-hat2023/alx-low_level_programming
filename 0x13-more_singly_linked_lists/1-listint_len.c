#include "lists.h"

/**
 * listint_len - connts number on nodes of A linke lists
 * @h: A pointer to the head of the linked list
 * Return: number the element
 * Write a function that returns the number of elements in A link
 */
size_t listint_len(const listint_t *h)
{
	size_t counteer = 0;

	while (h != 0)
	{
		h = h->next;
		counteer++;
	}
	return (counteer);
}
