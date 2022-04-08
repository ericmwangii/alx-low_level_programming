#include <stdio.h>
/**
 * main - Entry point
 *Description: This program prints all letters except for q and e
 *Return: 0 on success
 */

int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet == 'q' || alphabet == 'e')
continue;
putchar(alphabet);
}
putchar('\n');
return (0);
}
