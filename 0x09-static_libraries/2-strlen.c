#include "main.h"

/**
 * _strlen - length of string function
 * @s: pointer to char
 * Description: length of string
 * Return: length of string
 */

int _strlen(char *s)
{
int i;
i = 0;
while (*s != '\0')
{
i++;
s++;
}
return (i);
}
