#include "main.h"

/**
 * print_sign - Entry point
 * @n: The character to check
 * Description: print sign of number
 * Return: 1 and prints + if n i > 0
 *        0 and prints 0 if n is 0
 *       -1 and prints - if n is < 0
 */

int print_sign(int n)
{
int num;
if (n > 0)
{
_putchar('+');
num = 1;
}
else if (n == 0)
{
_putchar('0');
num = 0;
}
else
{
_putchar('-');
num = -1;
}
return (num);
}
