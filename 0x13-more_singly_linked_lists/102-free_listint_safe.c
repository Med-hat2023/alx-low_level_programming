#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 *
 * @h: A pointer to a pointer to the head of the linked list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *current, *temp;
if (h == NULL || *h == NULL)
return (0);
current = *h;
*h = NULL;
while (current != NULL)
{
count++;
if (current <= current->next)
{
temp = current->next;
free(current);
current = temp;
}
else
{
free(current);
break;
}
}
return (count);
}
