#include "3-calc.h"

/**
 * get_op_func - A function to determine the appropraite
 * operator to use on the arguments
 *
 * @s: The charactor for the operator
 * @a: The first number
 * @b: The second number
 * Return: A pointer to the function to use
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
	int i;

	i = 0;
	while (i < 6)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
	}
	return (NULL);
}
