#include "lists.h"

/**
 * list_len - number of elements in a linked list
 * @h: nodes
 * Return: number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
size_t nodes;
nodes = 0;

while (h != NULL)
{
h = h->next;
nodes++;
}
return (nodes);
}
