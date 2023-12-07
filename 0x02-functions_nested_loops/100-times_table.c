#include "main.h"
/**
 * print_times_table - print the times table of a given number
 * @n: the number passed to the parameter
 *
 * Return: Void
 */
void print_times_table(int n)
{
	if ((n >= 0) && (n <= 15))
	{
		int row, column, product;

		row = 0;

		while (row <= n)
		{
			column = 0;
			while (column <= n)
			{
				product = row * column;
				if (column == 0)
				{
					_putchar(product + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					if (product >= 100)
					{
						_putchar((product / 100) + '0');
						_putchar((product / 100) % 10 + '0');
						_putchar((product % 10) + '0');
					}
					else if (product >= 10)
					{
						_putchar((product / 10) + '0');
						_putchar((product % 10) + '0');
					}
					else
					{
						_putchar(' ');
						_putchar(product + '0');
					}
				}
				column++;
			}
			_putchar('\n');
			row++;
		}
	}
}
