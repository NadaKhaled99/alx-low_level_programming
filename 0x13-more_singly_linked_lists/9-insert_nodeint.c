#include "lists.h"
/**
*insert_nodeint_at_index-inserts a new node at a given position
*@head:
*@idx: is the index of the list where the new node should be added
*@n:input number
*Return:Returns: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *nnew;
listint_t *tmp = *head;
unsigned int z;
nnew = malloc(sizeof(listint_t));
if (!nnew || !head)
{
return (NULL);
}
nnew->n = n;
nnew->next = NULL;
if (idx == 0)
{
nnew->next = *head;
*head = nnew;
return (nnew);
}
for (z = 0; tmp && z < idx; z++)
{
if (z == idx - 1)
{
nnew->next = tmp->next;
tmp->next = nnew;
return (nnew);
}
else
{
tmp = tmp->next;
}
}
return (NULL);
}
