#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: int
 * @size: size
 * Description: prints the sum of the two diagonals
 * of a square matrix of integers
 * Return: void
 */

void print_diagsums(int *a, int size)
{
int i;
int r;
int c;
r = 0;
c = 0;

for (i = 0; i < size; i++)
{
r += a[i];
c += a[size - i - 1];
a += size;
}
printf("%d, ", r);
printf("%d\n", c);
}
