#include "main.h"
/**
 * print_rev - Prints a string  in reverse order.
 * @s: Pointer to the string.
 */
void print_rev(char *s)
{
	int length = 0;
	int index;

	/* get the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	/* print reverse */
	index = length - 1;

	while (index >= 0)
	{
		_putchar(s[index]);
		index--;
	}
	_putchar('\n');
}
