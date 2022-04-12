#include "main.h"
/**
   * print_alphabet_x10 - Entry point
   *Description: This program prints the alphabet in lowercase
   *followed by a new line 10 times.
   *Return: nothing
*/

void print_alphabet_x10(void)
{
char alphabet;
char counter;
for (counter = 0; counter < 10; counter++)
{
for (alphabet = 'a'; alphabet < 'z'; alphabet++)
_putchar(alphabet);
_putchar('\n');
}
}
