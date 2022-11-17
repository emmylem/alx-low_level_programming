#include "variadic_functions.h"
/**
 * sum_them_all - Sum all params
 * @n: cont unsigned int
 * Return: int sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vl;

	unsigned int i;
	int sum = 0;

	va_start(vl, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(vl, unsigned int);
	}

	va_end(vl);

	return (sum);
}
