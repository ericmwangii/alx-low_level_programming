#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to be concatenated to
 * @src: string to be concatenated
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
int a;
int i;
a = -1;

for (i = 0; dest[i] != '\0'; i++)
;

while (src[++a] != '\0')
{
dest[i] = src[a];
i++;
}

return (dest);
}
