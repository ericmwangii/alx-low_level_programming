#include "lists.h"

/**
 * sum_dlistint - sums the values of all the nodes in a dlistint_t list
 * @head: pointer to the head of the list
 * Return: sum of all the values in the list or 0 if the list is NULL
 */

int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *current;
   
current = head;
while (current != NULL)
{
sum += current->n;
current = current->next;
}
return (sum);
}
