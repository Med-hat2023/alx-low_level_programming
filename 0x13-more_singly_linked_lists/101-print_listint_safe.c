#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
* looped_listint_len - Counts the number of unique nodes
* in a looped listint_t linked list.
* @head: A pointer to the head of the listint_t to check.
* This function can print lists with a loop
* You should go through the list only once
* If the function fails, exit the program with status 98
* Return: If the list is not looped - 0.
* Otherwise - the number of unique nodes in the list.
* see example:mEdhat Deif:.
*/
size_t print_listint_safe(const listint_t *head);
{
	const listint_t *slow, *fast, *marker;
	unsigned int couneer = 0, flg = 0;

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
