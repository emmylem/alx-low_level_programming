#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: lists of args
 * Return: void
 */
void print_all(const char * const format, ...)
{
	char *str;
	unsigned int i = 0, check = 0;
	va_list vl;

	va_start(vl, format);

	while (format && format[i])
	{
		if (check)
			printf(", ");

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(vl, int));
				break;
			case 'i':
				printf("%i", va_arg(vl, int));
				break;
			case 'f':
				printf("%f", va_arg(vl, double));
				break;
			case 's':
				str = va_arg(vl, char*);
				if (str)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
				break;
			default:
				check = 0;
				i++;
				continue;
		}
		check = 1;
	}
	putchar('\n');
	va_end(vl);
}
