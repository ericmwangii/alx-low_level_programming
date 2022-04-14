#include <stdio.h>
/**
 * main - entry point
 * Description: fizzbuzz
 * Return: 0
 */

int main(void)
{
int numbers;

for(numbers = 1; numbers <= 100; numbers++)
{
if(numbers % 3 == 0 && numbers % 5 == 0)
{
printf("FizzBuzz");
}
else if(numbers % 3 == 0)
{
printf("Fizz");
}
else if(numbers % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", numbers);
}
if(numbers != 100)
{
printf(" ");
}
}
printf("\n");
return(0);  
}