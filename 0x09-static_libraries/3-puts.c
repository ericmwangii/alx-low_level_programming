#include "main.h"

/**
 * _puts - prints a string
 * @str: pointer to string
 * Description: prints string to stdout followed by new line
 * Return: null
 */

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
