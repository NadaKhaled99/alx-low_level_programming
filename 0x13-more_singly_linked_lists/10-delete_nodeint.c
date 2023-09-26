#include "lists.h"
/**
*delete_nodeint_at_index-deletes the node at index index of
*a listint_t linked list
*@head:1st node in linked list
*@index:is the index of the node that should be deleted.
*Return:1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp = *head;
unsigned int z = 0;
listint_t *moment = NULL;
if (*head == NULL)
{
return (-1);
}
if (index == 0)
{
*head = (*head)->next;
free(tmp);
return (1);
}
while (z < index - 1)
{
if (!tmp || !(tmp->next))
{
return (-1);
}
tmp = tmp->next;
z++;
}
moment = tmp->next;
tmp->next = moment->next;
free(moment);
return (1);
}
