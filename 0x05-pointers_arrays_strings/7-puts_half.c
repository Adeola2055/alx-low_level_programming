#include "main.h"
/**
 * puts_half - print the second half of a string.
 * @str: a pointer to a string value
 */
void puts_half(char *str)
{
	int n, index, length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	n = length / 2;
	index = n;
	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
