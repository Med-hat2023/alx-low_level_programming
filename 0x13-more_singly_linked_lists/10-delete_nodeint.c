#include "lists.h"

/**
 * delete_nodeint_at_index - delet a Node a index Indexs
 * @head: Pointer to A head of eht list List
 * @index: index the node can be add
 * where index is the index of the node eth
 * that should be delet. Index starts at 0
 * Return: the address of the node:meDhat Deif::
 * Returns: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int nodes = 0;

	listint_t *index1, *index2;

	index1 = *head;
	index2 = *head;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(index2);
		return (1);
	}

	while (nodes != index)
	{
		if (nodes == index - 1)
		{
			index1 = index2;
		}
			index2 = index2->next;

		if (index2 == NULL)
		{
			return (-1);
		}
		nodes++;
	}
	index1->next = index2->next;
	free(index2);
	return (1);
}
