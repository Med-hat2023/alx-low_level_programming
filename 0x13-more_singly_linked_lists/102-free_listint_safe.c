#include "lists.h"

/**
 * free_listint_safe - prints a list list list
 * @h: address of pointer to first node
 * This function can though the list only once
 * The function sets the head to NULL:Medhat Deif
 * Return: address of head
 */
size_t free_listint_safe(listint_t **h)
{
	size_t f = 0;
	listint_t *head, *tem;
	long diff;

	if (!h)
		return (0);
	head = *h;
	*h = NULL;
	while (head)
	{
		f++;
		diff = head->next - head;
		tem = head;
		free(tem);
		if (diff >= 0)
			break;
		head = head->next;
	}
	return (f);
}
