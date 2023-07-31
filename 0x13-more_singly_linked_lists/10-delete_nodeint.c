#include "lists.h"

/**
 * delete_nodeint_at_index - delet a Node a index Indexs
 * @head: Pointer to A head of hte list List
 * @index: index of the node to be added
 * where index is the index of the node eth
 * that should be deleted. Index starts at 0
 * Return: the address of the node
 * Returns: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *old_node = NULL;
	listint_t *previous_node = NULL;
	unsigned int k = 0, list_len = listint_len(*head);

	if ((index > list_len) || (list_len == 0))
		return (-1);
	while (head != NULL)
	{
		if (k == index)
		{
			old_node = *head;
			if (k == 0)
			{
				*head = old_node->next;
				free(old_node);
				return (1);
			}
			previous_node->next = old_node->next;
			free(old_node);
			return (1);
		}
		else if ((k + 1) == index)
			previous_node = *head;
		head = &((*head)->next);
		k++;
	}
	return (-1);
}

/**
 * listint_len - counts the number of Nodes in A links list
 * @h: head of the list LiSt
 * a function that deletes the node at index index of a listint_t linked list.
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t connt = 0;

	while (cursor != NULL)
	{
		connt += 1;
		cursor = cursor->next;
	}
	return (connt);
}
