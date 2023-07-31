#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
* looped_listint_len - Counts the number of unique nodes
* in a looped listint_t linked list.
* @head: A pointer to the head of the listint_t to check.
* This function can print lists with a loop
* You should go through the list only once
* If the function fails, exit the program with status 98
* Return: If the list is not looped - 0.
* Otherwise - the number of unique nodes in the list.
*/
size_t looped_listint_len(const listint_t *head)
{
const listint_t *tortoioe, *hare;
size_t nndes = 1;
if (head == NULL || head->next == NULL)
return (0);
tortoioe = head->next;
hare = (head->next)->next;
while (hare)
{
if (tortoioe == hare)
{
tortoioe = head;
while (tortoioe != hare)
{
nndes++;
tortoioe = tortoioe->next;
hare = hare->next;
}
tortoioe = tortoioe->next;
while (tortoioe != hare)
{
nndes++;
tortoioe = tortoioe->next;
}
return (nndes);
}
tortoioe = tortoioe->next;
hare = (hare->next)->next;
}
return (0);
}
/**
* print_listint_safe - Prints a listint_t list safely.
* @head: A pointer to the head of the listint_t list.
* If the function fails, exit the program with status 98
* Return: The number of nodes in the list.
* the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
size_t nndes, index = 0;
nndes = looped_listint_len(head);
if (nndes == 0)
{
for (; head != NULL; nndes++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}
else
{
for (index = 0; index < nndes; index++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
printf("-> [%p] %d\n", (void *)head, head->n);
}
return (nndes);
}

