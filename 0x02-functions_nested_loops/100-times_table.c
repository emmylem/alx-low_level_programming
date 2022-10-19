#include "main.h"

/**
 * times_table - print the n times table
 * @n: the number
 */
void print_times_table(int n)
{
	int n, mult, prod;

	for (n = 0; n <= 12; n++)
	{
		_putchar('0');

		for (mult = 1; mult <= 12; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = n * mult;

			if (n > 15 || n < 0)
				return (0);
		}
		_putchar('\n');
	}
}
