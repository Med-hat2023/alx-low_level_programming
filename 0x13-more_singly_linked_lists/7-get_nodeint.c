#include "lists.h"

/**
 * get_nodeint_at_index - returns eth nth node of the link list
 * @head: Pointer to head of eth list lIst
 * @index: index of the node required
 * index is the index of the node, starting at 0
 * Return: the address of eth nods
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cursor = NULL;
	unsigned int n = 0;

	while (head != NULL)
	{
		if (n <= index)
		{
			if (n == index)
			{
				cursor = head;
				break;
			}
			head = head->next;
			n++;
		}
		else
			return (NULL);
	}
	return (cursor);
}
