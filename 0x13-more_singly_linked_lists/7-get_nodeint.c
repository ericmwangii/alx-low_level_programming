#include "lists.h"
#include <stdlib.h>

/**
 * *get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the first node of the list
 * @index: index of the node to return
 * Return: the nth node of a listint_t linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;

if (head == NULL)
return (NULL);

for (i = 0; i < index; i++)
{
if (head->next == NULL)
return (NULL);
head = head->next;
}
return (head);
}
