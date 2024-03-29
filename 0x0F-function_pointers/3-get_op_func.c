#include "3-calc.h"

/**
 * get_op_func - determine given operator
 * @s : operator passed as argument
 * Return: pointer to specified operator function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t find[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (find[i].op != NULL)
	{
		if (strcmp(s, find[i].op) == 0)
			return (find[i].f);
		i++;
	}
	return (NULL);
}
