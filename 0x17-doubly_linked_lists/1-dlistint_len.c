#include "lists.h"
/**
*dlistint_len-the number of elements in a linked dlistint_t list
*@h:ptr to the list
*Return:number of nodes
 **/
size_t dlistint_len(const dlistint_t *h)
{
size_t conuter = 0;
const dlistint_t *nnode = h;
while (nnode)
{
conuter++;
nnode = nnode->next;
}
return (conuter);
}
