#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
*listint_len-returns the number of elements in a linked listint_t list
*@h:ptr to list_t list
*Return:number of nodes
*/
size_t listint_len(const listint_t *h)
{
size_t counter = 0;
while (h)
{
counter++;
h = h->next;
}
return (counter);
}
