#include <unistd.h>
/**
 * _putchar - writes the character to stdout
 * @c: the string
 * Return: 1 on sucess
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
