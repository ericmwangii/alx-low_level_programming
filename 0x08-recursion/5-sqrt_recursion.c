#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: -1 if n doesn't have a natural square root
 * or the natural square root of n
 */

int _sqrt_recursion(int n)
{
int i;

if (n < 0)
return (-1);
if (n == 0)
return (0);
for (i = 1; i * i <= n; i++)
{
if (i * i == n)
return (i);
}
return (-1);
}
