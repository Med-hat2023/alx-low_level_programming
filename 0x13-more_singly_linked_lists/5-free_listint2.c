#include "lists.h"

/**
 *free_listint2 - freess A link A list:::
 *@head: Pointer to A head Of A list:::
 *free_listint2 - frees a linked list
 *Return: equal The void Void
 */
void free_listint2(listint_t **head)
{
	listint_t *cursor;
	listint_t **temp = head;

	if (temp != NULL)
	{
		while (*head != NULL)
		{
			cursor = *head;
			free(cursor);
			*head = (*head)->next;
		}

		*temp = NULL;
	}
}
