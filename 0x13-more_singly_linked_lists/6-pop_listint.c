#include "lists.h"
/**
*pop_listint-deletes the head node of a listint_t linked list
*@head:listint_t list need to be freed
*Return:returns the head node’s data (n),
*if the linked list is empty return 0
*/
int pop_listint(listint_t **head)
{
listint_t *tmp;
int number;
if (!head || !*head)
{
return (0);
}
number = (*head)->n;
tmp = (*head)->next;
free(*head);
*head = tmp;
return (number);
}
