#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string to be concatenated to
 * @src: string to be concatenated
 * @n: number of bytes to be concatenated
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
int legnth_dest, legnth_src, i;
for (legnth_dest = 0; dest[legnth_dest] != '\0'; legnth_dest++)
;
for (legnth_src = 0; src[legnth_src] != '\0'; legnth_src++)
;
for (i = 0; i < n && i < legnth_src; i++)
dest[legnth_dest + i] = src[i];
dest[legnth_dest + i] = '\0';
return (dest);
}
