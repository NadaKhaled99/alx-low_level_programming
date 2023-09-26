#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
*add_nodeint-adds a new node at the beginning of a listint_t list
*@head:ptr to the list_t
*@n:input number
*Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
list_t *new;
new = malloc(sizeof(list_t));
if (!new)
{
return (NULL);
}
new->n = n;
new->next = *head;
*head = new;
return (new);
}
