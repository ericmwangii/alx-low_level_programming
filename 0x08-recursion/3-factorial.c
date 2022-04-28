#include "main.h"

/**
 * factorial - factorial of a given number
 * @n: number
 * Return: -1 if n is less than 0, 1 if n is 0, or n!
*/

int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
