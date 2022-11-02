#include "main.h"
/**
 * is_prime_number - prints prime number
 * @n: number
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	int i, count = 0;
	i = 0;

	if (n % i == 0)
	{
		count++;
	}
	if (count == 2)
	{
		return (1);
	}

	else
	{
		return (0);
	}
	return (0);
}
