#include "lists.h"
/**
*sum_listint-returns the sum of all the data (n) of a listint_t linked list
*@head:1st node in linked list
*Return:if the list is empty, return 0
*/
int sum_listint(listint_t *head)
{
int count = 0;
listint_t *tmp = head;
while (tmp)
{
count += tmp->n;
tmp = tmp->next;
}
return (count);
}
