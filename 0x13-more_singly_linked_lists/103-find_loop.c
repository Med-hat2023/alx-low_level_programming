#include "lists.h"
#include <stdlib.h>

/**
* find_listint_loop - find a loop in a link list list
* GitHub repository: alx-low_level_programming
* @head: linked list to search
* not allowed to use malloc,MedhatDeif free or arrays
* Return: address of node where loop starts/returns, NULL if no loop
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head;
listint_t *fast = head;
if (!head)
return (NULL);
while (slow && fast && fast->next)
{
fast = fast->next->next;
slow = slow->next;
if (fast == slow)
{
slow = head;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
return (fast);
}
}
return (NULL);
}
