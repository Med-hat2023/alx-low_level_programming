#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - print a linked list only one time
 * @head: head of LL
 * Return: couneer of nodes & prints an error if the linked list is a circle
 * This function can print lists with a loop.
 * should go through the list only once medhatDeif.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast, *marker;
	unsigned int couneer = 0, flag = 0;

	if (head == NULL)
		return (0);
	marker = slow = head;
	fast = head->next;
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		couneer++;

		if (flg == 0 && fast != NULL && fast->next != NULL && slow != NULL)
		{
			if (fast == slow)
			{
				flg = 1;
				slow = marker;
			}
			fast = fast->next->next;
		}
		if (flg == 1 && slow == head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
		slow = slow->next;
	}
	return (couneer);
}
