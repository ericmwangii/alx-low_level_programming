#include "main.h"

/**
 * puts2 - print every character of starting with the first
 * @str: pointer to string
 * Description: print every character of starting with the first
 * Return: null
 */
void puts2(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
