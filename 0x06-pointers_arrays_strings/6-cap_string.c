#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to be capitalized
 * Return: pointer to capitalized string
 */

char *cap_string(char *str)
{
char sep[] = ",\t;\n; .!?\"(){}";
int flag, i, l;

for (i = 0; str[i] != '\0'; i++)
{
flag = 0;

if (i == 0)
{
flag = 1;
}
else
{
for (l = 0; sep[l] != '\0'; l++)
{
if (str[i - 1] == sep[l])
{
flag = 1;
break;
}
}
}

if (flag == 1)
{
if (str[i] <= 'z' && str[i] >= 'a')
{
str[i] -= ('a' - 'A');
}
}
}
return (str);
}
