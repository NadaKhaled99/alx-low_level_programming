#include "lists.h"
/**
*find_listint_loop-finds the loop in a linked list
*@head:ptr to the list_t
*Return:The address of the node where the loop starts
*or NULL if there is no loop
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *S = head;
listint_t *F = head;
if (!head)
return (NULL);
while (S && F && F->next)
{
F = F->next->next;
S = S->next;
if (F == S)
{
S = head;
while (S != F)
{
S = S->next;
F = F->next;
}
return (F);
}
}
return (NULL);
}
