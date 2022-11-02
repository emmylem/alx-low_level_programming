#include "main.h"
/**
 * factorial - returns factorial of n
 * @n: integer
 * Return: 0
 */
int factorial(int n)
{
	int n;

	if (n < 0)
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1)
	{
		return (1);
	}
	return (0);
}
