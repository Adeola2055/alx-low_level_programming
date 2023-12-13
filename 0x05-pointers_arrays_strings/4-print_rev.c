#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: only operand
 *
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0') /* get length of characters as index */
	{
		i++;
	}
	i -= 1; /* to get the precise length for the next loop */
	while (s[i] >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
