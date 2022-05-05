#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: string to be scanned
 * @needle: string containing the characters to match
 * Description: locates a substring
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *Begin = haystack;
char *pattern = needle;

while (*haystack && *pattern && *haystack == *pattern)
{
haystack++;
pattern++;
}
if (!*pattern)
return (Begin);

haystack = Begin + 1;
}
return (NULL);
}
