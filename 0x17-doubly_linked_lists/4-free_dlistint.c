#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the head of the list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *current;
dlistint_t *next;

current = head;
while (current != NULL)
{
next = current->next;
free(current);
current = next;
}
}
