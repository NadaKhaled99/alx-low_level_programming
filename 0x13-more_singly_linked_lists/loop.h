#ifndef LOOP_H
#define LOOP_H
#include "lists.h"
/**
*loop_listint-counts the number of unique nodes
*@head:1st node in linked list
*Return:the number of nodes in the list
*/
size_t loop_listint(const listint_t *head)
{
const listint_t *t;
const listint_t *here;
size_t nnodes = 1;
if (head == NULL || head->next == NULL)
{
return (0);
}
t = head->next;
here = (head->next)->next;
while (here)
{
if (t == here)
{
t = head;
while (t != here)
{
nnodes++;
t = t->next;
here = here->next;
}
t = t->next;
while (t != here)
{
nnodes++;
t = t->next;
}
return (nnodes);
}
t = t->next;
here = (here->next)->next;
}
return (0);
}
#endif
