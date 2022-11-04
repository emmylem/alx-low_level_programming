#include <unistd.h>
/**
 * _putchar - prints to stdout
 * @c: string
 *
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
