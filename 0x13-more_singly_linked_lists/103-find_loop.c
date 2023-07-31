#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - finds hTe looP in A link list
 *
 * @head: link list to search
 * You are not allowed to use malloc, free or arrays
 * You can only declare a maximum of two variables in your function
 * Return: address of node where loop starts/returns, NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptt, *eed;

	if (head == NULL)
		return (NULL);
	for (eed = head->next; eed != NULL; eed = eed->next)
	{
		if (eed == eed->next)
			return (eed);
		for (ptt = head; ptt != eed; ptt = ptt->next)
			if (ptt == eed->next)
				return (eed->next);
	}

	return (NULL);
}
