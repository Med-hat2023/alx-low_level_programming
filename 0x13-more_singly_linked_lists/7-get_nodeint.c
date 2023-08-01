#include "lists.h"

/**
 * get_nodeint_at_index - returns eth nth node of the link list
 * @head: Pointer to head of eth list lIst
 * @index: index of the node Required TO medhat dEif::
 * index is the index of the Node, starting at 0
 * Return: the address of eth nods
 * if the node does not exist, return NULL
 * where index is the index of the node, starting at 0::
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nodes = 0;
	listint_t *copo;
	unsigned int couneer = 0;

	copo = head;

	while (copo != NULL)
	{
		nodes++;
		copo = copo->next;
	}
	copo = head;
	if (index > nodes - 1)
		return (NULL);

	while (couneer != index)
	{
		couneer++;
		copo = copo->next;
	}
	return (copo);
}
