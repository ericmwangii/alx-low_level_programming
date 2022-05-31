#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of binary digits
 * Return: unsigned int
 */

unsigned int binary_to_uint(char *b)
{
unsigned int n = 0;
int i = 0;

while (b[i] != '\0')
{
if (b[i] == '1')
n = n * 2 + 1;
else if (b[i] == '0')
n = n * 2;
else
return (0);
i++;
}
return (n);
}
