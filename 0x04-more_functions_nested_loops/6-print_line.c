#include "main.h"

/**
 * print_line - draws a straight line
 * @n: length
 * Description: draws a straight line of n length
 * Return: void
 */

void print_line(int n)
{
int l;

for (l = 0; (l < n && l >= 0); l++)
{
_putchar(95);
}
_putchar('\n');
}
