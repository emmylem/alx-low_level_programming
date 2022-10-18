#include "main.h"
#include <unistd.h>
/**
 * flox - Entry header
 * @c - the character to print
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
