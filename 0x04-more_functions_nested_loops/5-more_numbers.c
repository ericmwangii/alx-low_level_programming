#include "main.h"

/**
 * more_numbers - entry point
 * Description - prints numbers from 0 to 14
 * 10 times
 * Return: void
 */

void more_numbers(void)
{
int i;
int counter;

for (counter = 0; counter < 10; counter++)
{
for (i = 0; i <= 14; i++)
{
if (i > 9)
{
_putchar('1');
}
_putchar(i % 10 + '0');
}
_putchar('\n');
}
}
