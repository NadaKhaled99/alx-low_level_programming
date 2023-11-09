#include "lists.h"
/**
*sum_dlistint-returns the sum of all the data (n) of a dlistint_t list.
*@head:ptr to the list
*Return:if the list is empty, return 0	
**/
int sum_dlistint(dlistint_t *head)
{
dlistint_t *nnode = head;
int count = 0;
while (nnode)
{
count += nnode->n;
nnode = nnode->next;
}
return (count);
}
