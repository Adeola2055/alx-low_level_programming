#include "main.h"
/**
 * swap_int - saps the value of two integers
 * @a: first operand
 * @b: second operand
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
