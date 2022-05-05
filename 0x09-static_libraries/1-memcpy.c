#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: pointer to the buffer to be set
 * @src: value to be set
 * @n: number of bytes to be set
 * Description: copies memory area
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned  int i;
for (i = 0; i < n; i++)
dest[i] = src[i];

return (dest);
}
