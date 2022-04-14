#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: length
 * Description: draws a diagonal line of n length
 * Return: void
 */

void print_diagonal(int n)
{
int i = 0, d;

while (i < n && n > 0)
{
d = 0;
while (d < i)
{
_putchar(' ');
d++;
}

_putchar('\\');
_putchar('\n');
i++;
}
if (i == 0)
_putchar('\n');
}
