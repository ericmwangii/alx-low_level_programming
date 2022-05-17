#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list valist);
void print_int(va_list valist);
void print_float(va_list valist);
void print_string(va_list valist);
void print_all(const char * const format, ...);

/**
 * print_char - prints a character
 * @valist:  list of arguments
 * Return: null
 */

void print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}

/**
 * print_int - prints an integer
 * @valist:  list of arguments
 * Return: null
 */

void print_int(va_list valist)
{
	printf("%d", va_arg(valist, int));
}

/**
 * print_float - prints a float
 * @valist: list of arguments
 * Return: null
 */

void print_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}

/**
 * print_string - prints a string
 * @valist: list of arguments
 * Return: null
 */
void print_string(va_list valist)
{
	char *str;

	str = va_arg(valist, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - prints anything, followed by a new line
 * @format: is a list of types of arguments passed to the function
 * Return: null
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int i = 0, j = 0;
	char *separator = "";
	format_specifier_t format_specifiers[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(valist, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(format_specifiers[j].specifier)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			format_specifiers[j].func(valist);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(valist);
}
