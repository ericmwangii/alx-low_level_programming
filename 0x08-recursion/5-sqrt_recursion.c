#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: -1 if n doesn't have a natural square root
 * or the natural square root of n
 */

int _sqrt_recursion(int n)
{
return (squarerootofnumber(n, 1));
}

/**
 * squarerootofnumber - returns the natural square root of a number
 * @num: number
 * @sqroot: square root of number
 * Return: square root
 */

int squarerootofnumber(int num, int sqroot)
{
if (sqroot * sqroot == num)
return (sqroot);
else if (sqroot * sqroot > num)
return (-1);
else
return (squarerootofnumber(num, sqroot + 1));
}
