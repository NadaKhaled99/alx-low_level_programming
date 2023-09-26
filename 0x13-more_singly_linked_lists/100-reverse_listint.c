#include "lists.h"
/**
*reverse_listint-reverses a listint_t linked list
*@head:1st node in linked list
*Return:a pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *next = NULL;
listint_t *past = NULL;
while (*head)
{
next = (*head)->next;
(*head)->next = past;
past = *head;
*head = next;
}
*head = past;
return (*head);
}
