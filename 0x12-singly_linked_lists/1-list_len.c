#include "lists.h"
/**
*list_len-returns the number of elements in a linked list_t list
*@h:ptr to list_t list
*Return: the number of nodes
*/
size_t list_len(const list_t *h)
{
size_t counter = 0;
while(h)
{
counter++;
h = h->next;
}
return (counter);
}
