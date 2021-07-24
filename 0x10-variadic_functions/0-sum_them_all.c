#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all parameters
 * @n: number of arguments
 * Return: sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list valist;

	va_start(varlist, n);
	for (i = 0; i < n; i++)
		sum += va_arg(varlist, int);
	va_end(varlist);
	return (sum);
}

