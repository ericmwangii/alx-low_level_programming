#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: pointer to string
 * Description: print string in reverse
 * Return: null
 */

void print_rev(char *s)
{
int length, i;
length = 0;
while (*s != '\0')
{
length++;
s++;
}

for (i = length; i >= 0; i--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
