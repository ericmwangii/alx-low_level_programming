#include <stdio.h>
/**
 * main - Entry point
 *Description: This program prints all single digit numbers
 *of base 10 starting from 0
 *Return: 0 on success
 */

int main(void)
{
int number;
for (number = 0; number <= 9; number++)
{
putchar('0' + number);
}
putchar('\n');
return (0);
}
