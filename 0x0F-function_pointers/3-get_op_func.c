#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - Function that select the operator
 * @s: Input pointer
 * Return: Output return
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
	int var1 = 0;

	while (var1 < 5)
	{
		if (*(ops[var1]).op == *s)
		{
			return (ops[var1].f);
		}
		i++;
	}
	return (ops[var1].f);
}
