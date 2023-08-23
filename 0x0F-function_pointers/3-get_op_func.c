#include "3-calc.h"

/**
 * get_op_func - A function to determine the appropraite
 * operator to use on the arguments
 *
 * @s: The charactor for the operator
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
	while (i < 5)
	{
<<<<<<< HEAD
		if (*(ops[i].op) == *s)
=======
		if (strcmp(ops[i].op, s) == 0)
>>>>>>> 9968ad34ee6656d9b0331038a6d98f3bfd4df3b4
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
