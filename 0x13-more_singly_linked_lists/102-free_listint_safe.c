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
size_t lee = 0;
int doff;
listint_t *tepp;
if (!h || !*h)
return (0);
while (*h)
{
doff = *h - (*h)->next;
if (doff > 0)
{
tepp = (*h)->next;
free(*h);
*h = tepp;
lee++;
}
else
{
free(*h);
*h = NULL;
lee++;
break;
}
}
*h = NULL;
return (lee);
}
