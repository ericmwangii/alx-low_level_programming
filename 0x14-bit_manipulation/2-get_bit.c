#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to be converted
 * @index: index of the bit to be returned
 * Return: 1 if the bit is 1, 0 if the bit is 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mask;

mask = 1 << index;
return ((n & mask) >> index);
}
