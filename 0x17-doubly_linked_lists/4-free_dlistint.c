#include "lists.h"
/**
*free_dlistint-frees a dlistint_t list
*@head:ptr to the list
**/
void free_dlistint(dlistint_t *head)
{
dlistint_t *real_node;
dlistint_t *nextnode;
if (head)
{
real_node = head;
nextnode = head->next;
while (nextnode)
{
free(real_node);
real_node = nextnode;
next_node = nextnode->next;
}
free(real_node);
}
}
