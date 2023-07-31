#include "lists.h"

/**
 *free_listint2 - freess A link A list:::
 *@head: Pointer to A head Of A list:::
 *ree_listint2 - frees a linked list
 *Return: Equal The void Void:::
 */

void free_listint2(listint_t **head)
{
	listint_t *cursor;
	listint_t **tepp = head;

	if (tepp != NULL)
	{
		while (*head != NULL)
		{
			cursor = *head;
			free(cursor);
			*head = (*head)->next;
		}

		*tepp = NULL;
	}
}
