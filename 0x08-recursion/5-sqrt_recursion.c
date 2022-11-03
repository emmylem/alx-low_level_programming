#include "main.h"
/**
 * _sqrt_recursion - returns square root
 * @n: number
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - recursive square root
 * @n: number
 * @i: another
 */

int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (1);
	return (_sqrt(n, i + 1));
	return (0);
}


