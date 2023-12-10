#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of diagonal line to be draw
 *
 */
void print_diagonal(int n)
{
	int i, j;

	i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			j = 0;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}
