#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string to print
 * Description: prints half of a string If the number of characters is odd,
 * the function should print the last n characters of the string
 * Return: void
 */
void puts_half(char *str)
{
int length;
length = 0;

for (length = 0; str[length] != '\0'; length++)
;
length++;

for (length /= 2; str[length] != '\0'; length++)
{
_putchar(str[length]);
}
_putchar('\n');
}
