#include "lists.h"

/**
 * add_node - adds a new node at te beginning
 * @head: head of linked list
 * @str: str to store
 * Return: address of the new element, or NULL if fail
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *newlist;
size_t c;

newlist = malloc(sizeof(list_t));
if (newlist == NULL)
return (NULL);

newlist->str = strdup(str);

for (c = 0; str[c]; c++)
;

newlist->len = c;
newlist->next = *head;
*head = newlist;

return (*head);
}
