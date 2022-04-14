#include "main.h"

/**
 * print_square - print sqaure
 * @n : # to be printed
 * Return: void
 */

void print_square(int n)
{

int i = 0, s;

while (i < n && n > 0)
{
s = 0;
while (s < n)
{
_putchar('#');
s++;
}

_putchar('\n');
i++;
}
if (i == 0)
_putchar('\n');
}
