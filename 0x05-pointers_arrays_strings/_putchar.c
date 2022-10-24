#include <unistd.h>
/**
 * _putchar - writes characters c to stdout
 * @c: char to be printed
 * Return: On succes 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
