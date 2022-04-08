#include <stdio.h>

/**
 * main - Entry point
 * Description: program that prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: 0 on success
 */

int main(void)
{
char alphabet;
for (alphabet = 'z'; alphabet >= 'a' ; alphabet--)
{
putchar (alphabet);
}
putchar ('\n');
return (0);
}
