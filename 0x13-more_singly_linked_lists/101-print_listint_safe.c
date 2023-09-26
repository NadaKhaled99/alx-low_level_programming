#include "lists.h"
#include "loop.h"
/**
*print_listint_safe-prints a listint_t linked list
*@head:1st node in linked list
*Return:the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
size_t nnodes = 0;
size_t index = 0;
nnodes = loop_listint(head);
if (nnodes == 0)
{
for (; head != NULL; nnodes++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}
else
{
for (index = 0; index < nnodes; index++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
printf("-> [%p] %d\n", (void *)head, head->n);
}
return (nnodes);
}
