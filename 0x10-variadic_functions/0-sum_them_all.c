#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of arguments
 * Return: sum of all arguments
 * if n==0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i;

va_list lptr;

va_start(lptr, n);

for (i = 0; i < n; i++)
sum += va_arg(lptr, int);

va_end(lptr);

return (sum);
}
