#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of the list
 *free_listint - frees a linked list lisT::
 * Return: equal tHe vOId
 */
void free_listint(listint_t *head)
{
	listint_t *tepp;

	while (head != NULL)
	{
		tepp = head;
		head = head->next;
		free(tepp);
	}
}
