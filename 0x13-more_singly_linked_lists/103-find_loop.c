#include "lists.h"
/**
* find_listint_loop - finds the loop
* @head: head
* Return: mean the eht address
* Loop starts at [0x1370030] 7 : MedhatDeif::
* not allowed to use malloc
* nly declare a maximum of two variables in your functioni
*  to make a loop in, on, or about. b. : to fasten with a loop
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *s = head;
listint_t *k = head;

if (!head)
return (NULL);
while (s && k && k->next)
{
k = k->next->next;
s = s->next;
if (k == s)
{
s = head;
while (s != k)
{
s = s->next;
k = k->next;
}
return (k);
}
}
return (NULL);
}
