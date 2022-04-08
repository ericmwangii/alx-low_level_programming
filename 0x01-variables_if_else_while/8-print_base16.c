#include <stdio.h>

/**
 * main - Entry point
 * Description: program that prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: 0 on success
 */

int main(void)
{
int number;
int hex;

for (number = 0; number <= 9  ; number++)
putchar ('0' + number);
for (hex = 'a'; hex <= 'f' ; hex++)
{
putchar (hex);
}
putchar ('\n');
return (0);
}
