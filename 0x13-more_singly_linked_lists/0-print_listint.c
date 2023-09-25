#include "lists.h"
/**
*print_listint-prints all the elements of a listint_t list
*@h:ptr to the  list _t which can allowed to print
*Return:number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t number = 0;
while (h)
{
printf("%d\n", h->n);
number++;
h = h->next;
}
return (number);
}
