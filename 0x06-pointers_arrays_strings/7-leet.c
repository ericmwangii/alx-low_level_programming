#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 * Return: pointer to encoded string
 */

char *leet(char *s)
{
int i, l;
char s1[] = "aeotl";
char S1[] = "AEOTL";
char s2[] = "43071";

for (i = 0; s[i] != '\0'; i++)
{
for (l = 0; l < 5; l++)
{
if (s[i] == s1[l] || s[i] == S1[l])
{
s[i] = s2[l];
break;
}
}
}
return (s);
}
