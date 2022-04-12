#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @n: int
 * Description: function that prints the last digit of a number
 * Return: value of last digit
 */

int print_last_digit(int n)
{
int last_digit;
if (n < 0)
{
last_digit = 10 - (n % 10);
}
else
{
last_digit = (n % 10);
}
_putchar((last_digit % 10)  + '0');
return (last_digit % 10);
}
