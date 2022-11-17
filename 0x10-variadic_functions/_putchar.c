#include <unistd.h>
/**
 * _puchar - writes to stdout
 * @c: char
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
