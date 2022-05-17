#ifndef VARIADIC
#define VARIADIC
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct format_specifier - struct for format specifier
 * @specifier: specifier
 * @func: function
 */

typedef struct format_specifier
{
	char *specifier;
	void (*func)(va_list arg);

} format_specifier_t;


#endif /*VARIADIC*/
