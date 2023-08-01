#include "lists.h"

/**
 * free_listint_safe - prints a list:mEdhat Deif
 * @h: address of pointer to first node
 * This function can free lists with a loop
 * You should go though the list only once
 * The function sets the head to NULL
 * Return: address of head
 */
size_t free_listint_safe(listint_t **h)
{
	size_t s = 0;
	listint_t *head, *tepp;
	long diff;

	if (!h)
		return (0);
	head = *h;
	*h = NULL;
	while (head)
	{
		s++;
		diff = head->next - head;
		tepp = head;
		free(tepp);
		if (diff >= 0)
			break;
		head = head->next;
	}
	return (s);
}
