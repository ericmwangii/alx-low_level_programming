#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory.
 * @b: amount of bytes.
 * Return: pointer to the allocated memory.
 * if fail, status value is equal to 98.
 */
void *malloc_checked(unsigned int b)
{
char *g;

g = malloc(b);
if (g == NULL)
exit(98);
return (g);
}
