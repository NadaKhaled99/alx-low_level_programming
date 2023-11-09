#include "lists.h"
/**
*add_dnodeint_end - adds a new node at the end of a dlistint_t list.
*@head:ptr to the first element of the list
*@n:integer to add in the new node
*Return:address of the new element, or NULL if it failed
**/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *nnew, *x = *head;
nnew = malloc(sizeof(dlistint_t));
if (nnew == NULL)		
{
return (NULL);
}
nnew->n = n;
nnew->next = NULL;
if (x)
{
while (x->next)
x = x->next;
nnew->prev = x;
x->next = nnew;
}
else
{
*head = nnew;
nnew->prev = NULL;
}
return (nnew);
}
