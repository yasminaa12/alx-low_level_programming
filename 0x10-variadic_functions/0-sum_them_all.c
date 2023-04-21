#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: the number of parameters passed to the function
 * @...: a variable number of parameters to calculate the sum of
 *
 * Return: the integer sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int s = 0, i = n;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);

	while (i--)
		s += va_arg(ap, int);
	va_end(ap);
	return (s);
}
