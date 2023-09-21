#include "lists.h"
#include <string.h>
/**
*add_node-adds a new node at the beginning of a list_t list
*@str:string need to add in the node
*@head:ptr to the list_t
*Description:double linked list node structure
*Return:the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *nnew;
unsigned int len = 0;
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
nnew->next = (*head);
(*head) = nnew;
return (*head);
}
