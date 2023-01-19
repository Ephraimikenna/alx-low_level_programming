#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform
 * the operation asked by the user.
 * @s: The operator passed as argument.
 * Return: A pointer to the function that corresponding
 * to the operator given as a parameter.
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

	while (ops[1].op)
	{
		if (strcmp(ops[1].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);

}
