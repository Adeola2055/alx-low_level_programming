#include "main.h"
/**
 * print_line - draw a straight line on the console
 * @n: argument for print_line
 *
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		i++;
	}
	_putchar('\n');
}
