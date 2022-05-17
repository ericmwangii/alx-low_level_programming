#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: string to be printed between each string
 * @n: number of strings passed to the function
 * Retrun: null
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list valist;
unsigned int i;
char *str;

va_start(valist, n);

for (i = 0; i < n; i++)
{
str = va_arg(valist, char *);

if (str == NULL)
str = "(nil)";
else
printf("%s", str);

if (separator != NULL && i < n - 1)
printf("%s", separator);

}
printf("\n");
va_end(valist);
}
