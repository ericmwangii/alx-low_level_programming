#include <stdio.h>
/**
 * main - Entry point
 * Description: Write a program that prints all possible combinations
 * of single-digit numbers.
 * Return: 0 on success
 */

int main(void)
{
int number = 0;

while (number < 10)
{
putchar('0' + number);
if (number != 9)
{
putchar(',');
putchar(' ');
}
number++;
}
putchar('\n');
return (0);
}

