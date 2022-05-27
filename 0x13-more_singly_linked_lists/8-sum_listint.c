#include "lists.h"


/**
 * sum_listint - returns the sum of all data (n) of a listint_t linked list.
 * @head: pointer to the first node of the list
 * Return: the sum of all data (n) of a listint_t linked list.
 */

int sum_listint(listint_t *head)
{
int sum = 0;

while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
