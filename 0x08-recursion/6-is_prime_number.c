#include "main.h"
/**
 * is_prime_number - prints prime number
 * @n: number
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	int i = 103;

	if (n % i == 0)
	{
		return (0);
	}
	if (i == n)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
