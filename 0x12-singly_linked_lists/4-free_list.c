#include "lists.h"
/**
*free_list-frees a list_t list
*@head: list_t list need to be freed
*/
void free_list(list_t *head)
{
list_t *start;
while (head)
{
start = head->next;
free(head->str);
free(head);
head = start;
}
}
