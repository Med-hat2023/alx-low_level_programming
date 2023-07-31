#include "lists.h"

/**
* free_listint_safe - freeRs A link list
* @h: pointer to the first node in the linked list
* This function can free lists with a loop
* You should go though the list only once
* Returns: the size of the list that was free’d
* Return: number of elements in the freed list
*/
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}

