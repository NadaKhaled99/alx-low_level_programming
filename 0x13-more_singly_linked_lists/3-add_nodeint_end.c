#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
*add_nodeint_end-adds a new node at the end of a listint_t list
*@head:ptr to the list_t
*@n:input number
*Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *nnew;
listint_t *tmp = *head;
nnew = malloc(sizeof(listint_t));
if (!nnew)
{
return (NULL);
}
nnew->n = n;
nnew->next = NULL;
if (*head == NULL)
{
*head = nnew;
return (nnew);
}
while (tmp->next)
{
tmp = tmp->next;
}
tmp->next = nnew;
return (nnew);
}
