#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * get_op_func -  perform the asked  operation
 * @s: pointer to string
 * Return: pointer a function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {{"+", op_add}, {"-", op_sub},
			{"*", op_mul}, {"/", op_div},
			{"%", op_mod}, {NULL, NULL}};
	int x = 0;

	while (ops[x].op)
	{
		if (!strcmp(ops[x].op, s))
			return (ops[x].f);
		x++;
	}

	return (NULL);
}
