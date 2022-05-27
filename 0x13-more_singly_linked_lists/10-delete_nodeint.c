#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: head of list
 * @index: index of node to delete
 * Return: 1 if success, -1 if failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp;
unsigned int i;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(*head);
return (1);
}

temp = *head;
for (i = 0; i < index - 1; i++)
{
if (temp->next == NULL)
return (-1);
temp = temp->next;
}
temp->next = temp->next->next;
free(temp->next);
return (1);
}
