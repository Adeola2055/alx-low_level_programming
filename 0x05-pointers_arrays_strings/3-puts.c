#include "main.h"
/**
 * _puts - Prints a string to stdout.
 * @str: pointer to a string value.
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
