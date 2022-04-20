#include "main.h"

/**
 * swap_int - swaps value of two integers
 * @a: first integer
 * @b: second integer
 * Description: swaps value of two integers
 * Return: void
 */

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
