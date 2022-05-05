#include "main.h"

/**
 * *_memset - function that fills memeory with constant byte
 * @s: pointer to s
 * @b:value to be set
 * @n: unsingned int
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
s[i] = b;

return (s);
}
