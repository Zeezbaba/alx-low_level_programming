#include "variadic_functions.h"

/**
 * sum_them_all - calculate sum of its parameter
 * @n: number of arguments passed into the function
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);
	va_end(list);

	return (sum);
}
