#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all the variable passed to a function
 * @n: the first integer passed
 * Return: the sum of the variable
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list argument;

	va_start(argument, n);

	for (i = 0; i < n; i++)
		sum += va_arg(argument, int);
	va_end(argument);

	return (sum);
}
