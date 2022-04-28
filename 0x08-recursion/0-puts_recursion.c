#include "main.h"

/**
 * _puts_recursion - print a string
 * @str: string to print
 * Return: void
 */

void _puts_recursion(char *str)
{
if (*str == '\0')
{
_putchar('\n');
return;
}
_putchar(*str);
_puts_recursion(str + 1);
}
