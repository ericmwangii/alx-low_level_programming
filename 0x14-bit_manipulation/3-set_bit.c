#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number to be converted
 * @index: index of the bit to be set
 * Return: 1 if the bit was set, -1 if error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;

if (index > 63)
return (-1);

mask = 1 << index;
*n = *n | mask;
return (1);
}
