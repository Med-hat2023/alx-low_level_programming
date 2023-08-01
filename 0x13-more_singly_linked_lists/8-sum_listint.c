#include "lists.h"

/**
 * sum_listint - sums Up All eth data in A link list
 * @head: head of the list
 * Prototype: int sum_listint(listint_t *head);
 * Return: sum Of eth numbers
 * if the list is empty, return 0
 * if the list is empty:MedhatDeif
 */
int sum_listint(listint_t *head)
{
	listint_t *cursor = head;
	size_t sum = 0;

	while (cursor != NULL)
	{
		sum += cursor->n;
		cursor = cursor->next;
	}
	return (sum);
}
