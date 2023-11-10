#include "lists.h"
/**
*delete_dnodeint_at_index-deletes the node at index of a dlistint_t list.
*@head:ptr to the list
*@index:position of the node to delete
*Return:1 if it succeeded, -1 if it failed.
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *x = *head;
dlistint_t *nodedelete = *head;
unsigned int idx;
unsigned int conuter = 0;
if (!(*head))
return (-1);
if (index == 0)
{
*head = nodedelete->next;
free(nodedelete);
if (*head)
(*head)->prev = NULL;
return (1);
}
idx = index - 1;
while (x && conuter != idx)
{
conuter++;
x = x->next;
}
if (conuter == idx && x)
{
nodedelete = x->next;
if (nodedelete->next)
nodedelete->next->prev = x;
x->next = nodedelete->next;
free(nodedelete);
return (1);
}
return (-1);
}
