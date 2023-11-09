#include "lists.h"
/**
*get_dnodeint_at_index-returns the nth node of a dlistint_t linked list.
*@head:ptr to the list
*@index:node
*Return:node, if the node doesn't exist, returns NULL.
**/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *nnode = head;
unsigned int conuter = 0;
while (nnode && conuter != index)
{
conuter++;
nnode =nnode->next;
}
if (nnode && conuter == index)
{
return (nnode);
}
return (NULL);
}
