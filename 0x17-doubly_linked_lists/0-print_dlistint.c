#include "lists.h"
/**
*print_dlistint-the number of elements in a linked dlistint_t list
*@h:ptr to the list
*Return:number of nodes
**/
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *nnode = h;
size_t conuter = 0;
while (nnode)
{
printf("%i\n", nnode->n);
conuter++;
nnode = nnode->next;
}
return (conuter);
}
