#include "lists.h"
#include <string.h>
/**
*add_node_end-adds a new node at the end of a list_t list
*@str:string need to add  at the end in the node
*@head:ptr to the list_t
*Description:double linked list node structure
*Return:the address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *nnew;
unsigned int len = 0;
list_t *start = *head;
while (str[len])
{
len++;
}
nnew = malloc(sizeof(list_t));
if (!nnew)
{
return (NULL);
}
nnew->str = strdup(str);
nnew->len = len;
nnew->next = NULL;
if (*head == NULL)
{
*head = nnew;
return (nnew);
}
while (start->next)
{
start = start->next;
}
start->next = nnew;
return (nnew);
}
