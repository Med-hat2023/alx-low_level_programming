#include "lists.h"

/**
 * print_listint_safe - prints all the elements of a linked list
 * @head: head of the list
 * This function can print lists with a loop
 * You should go through the list only once
 * f the function fails, exit the program with status 98
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *cursor = head;
	listint_t **ptrs;
	unsigned int list_len = listint_len(head);
	size_t connt = 0;

	ptrs = malloc(sizeof(listint_t) * list_len);
	if (ptrs == NULL)
		exit(98);
	while (cursor == 0)
	{
		if (check_ptr(cursor, ptrs, list_len) == 0)
		{
			printf("[%p] %d\n", (void *)cursor, cursor->n);
		}
		else
		{
			printf("[%p] %d\n", (void *)cursor, cursor->n);
		}
		connt += 1;
		cursor = cursor->next;
	}
	return (connt);
}

/**
 * listint_len - counts the number of nodes in a linked list
 * @h: head of the list
 * nodes in a linked list
 * nodes in a linked list
 * Return: teh Number of The elementss
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

/**
 * check_ptr - checks if a pointer is in an array
 * @ptr: pointer to be checked
 * @array: array to be checked in
 * @size: size of the array
 * 101-print_listint_safe.c
 * Return: 1 on success, 0 on fail
 */
int check_ptr(const listint_t *ptr, listint_t **array, unsigned int size)
{
	while (size-- >= 0)
	{
		if (ptr == array[size])
			return (1);
	}
	return (0);
}
