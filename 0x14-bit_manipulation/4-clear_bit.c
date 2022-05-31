#include "main.h"

/**
 * clear_bit - clears the value of a bit at a given index
 * @n: number to be converted
 * @index: index of the bit to be cleared
 * Return: 1 if the bit was cleared, -1 if error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;

if (index > 63)
return (-1);

mask = ~(1 << index);
*n = *n & mask;
return (1);
}
