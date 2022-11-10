#include <unistd.h>
/**
 * _putchar - prints to stdout
 * @c: string
 *
 * Return: 0 on sucess
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
