#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of diagonal lines to be draw
 *
 */
void print_diagonal(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			int j = 0;
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
