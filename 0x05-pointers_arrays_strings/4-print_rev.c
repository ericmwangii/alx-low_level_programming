#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: pointer to string
 * Description: print string in reverse
 * Return: null
 */

void print_rev(char *s)
{

int i;
i = 0;
while (s[i])
	i++;

while (i--)
{
	_putchar(s[i]);
}
_putchar('\n');
}
