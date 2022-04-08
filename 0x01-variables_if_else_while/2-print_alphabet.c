#include <stdio.h>
/**
   * main - Entry point
   *Description: This program prints the alphabet in lowercase
   *Return: 0 on success
*/

int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
putchar(alphabet);
putchar('\n');
return (0);
}
