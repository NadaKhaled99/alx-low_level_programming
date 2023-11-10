#include "lists.h"
/**
*insert_dnodeint_at_index_inserts a node node at a given position
*@h:ptr to the list
*@idx:ndex of the list where the new node should be added
*@n:number for the new node
*Return:the address of the new node, or NULL if it failed
**/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *x = *h;
dlistint_t *nnew;
unsigned int index
unsigned int conuter = 0;
nnew = malloc(sizeof(dlistint_t));
if (nnew == NULL)
{
return (NULL);
}	
nnew->n = n;
if (idx == 0)
{
nnew->prev = NULL;
nnew->next = *h;
if (*h)
(*h)->prev = nnew;
*h = nnew
return (*h);
}
index = idx - 1;
while (x && conuter != index)
{
conuter++;
x = x->next;
}
if (cont == index && aux_node)
{
nnew->prev = x;
nnew->next = x->next;
if (x->next)
x->next->prev = nnew;
x->next = nnew;
return (nnew);
}
free(nnew);
return (NULL);
}
