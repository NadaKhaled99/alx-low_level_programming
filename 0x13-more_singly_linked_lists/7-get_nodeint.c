#include "lists.h"
/**
*get_nodeint_at_index-returns the nth node of a listint_t linked list
*@head:1st node in linked list
*@index:index of the node, starting at 0 need to return
*Return: return NULL if the node does not exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *tmp = head;
unsigned int z = 0;
while (tmp && z < index)
{
tmp = tmp->next;
z++;
}
if (tmp != NULL)
{
return (tmp);
}
else
{
return (NULL);
}
}
