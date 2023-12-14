#include "main.h"
/**
 * puts_half - prints the second of a string
 * @str: operand
 */
void puts_half(char *str)
{
	int n;
	int length = 0;

	/* get length of str */
	while (str[length] != '\0')
	{
		length++;
	}
	/* check if half of str is odd or even */
	/*if (length % 2 == 0)
	{
		n = length / 2;
	}
	else */
	n = (length + 1) / 2;
	/* print the second half of str */
	while (n < length)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
