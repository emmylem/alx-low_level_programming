#include "main.h"
/**
 * _increasevar - increase i to find sqrt
 * @i: starts at q
 * @n: the number
 * Return: i, 1 or -1
 */
int _increasevar(int i, int n)
{
	if (i * i == n)
		return (i);
	if (i * i < n)
		return (-1);
	return (i);
}
/**
 * _sqrt_recursion - finds sqrt
 * @n: number
 *
 * Return: -1, 0, or sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	else if (n > 1)
	{
		return (_increasevar(1, n));
	}
	return (-1);
}
