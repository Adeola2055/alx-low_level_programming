#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int length = 0;
	int index = 0;

	/* get length */
	while (s[index] != '\0')
	{
		index++;
	}
	length = index - 1;
	while (length >= 0)
	{
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');
}
