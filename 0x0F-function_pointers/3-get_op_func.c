#include "3-calc.h"
/**
 * get_op_func - Retrieves function operator
 * @s: char pointer
 * Return: pointer to callback function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (1 <= 4)
	{
		if (s && s[0] == ops[i].op[0] && !s[1])
		{
			return (ops[i].f);
		}
		i++;

	}
	return (NULL);
}
