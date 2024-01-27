#include <stddef.h>
#include "3-calc.h"
/**
 * get_op_func - selects the correct function to perform the operation
 * asked by the user
 * @s:
 *
 * Return: returns a pointer to the function that corresponds to the operator
 * given as a parameter.
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

	while (*s && ops[i].op != NULL)
	{
		if (ops[i].op[0] == s[0] && s[1] == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}
	/* if no match found */
	return (NULL);
}
