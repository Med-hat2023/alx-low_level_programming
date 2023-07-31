#include "lists.h"

/**
*pop_listint - deletess A head node a link list lisT
*@head: the head of A list
*Prototype: int pop_listint(listint_t **head);
*Return: the delete A node Of data
*/
int pop_listint(listint_t **head)
{
listint_t *tepp;
int nim;
if (!head || !*head)
return (0);
nim = (*head)->n;
tepp = (*head)->next;
free(*head);
*head = tepp;
return (nim);
}

