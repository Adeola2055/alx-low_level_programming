#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 *
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int column, row, space;

		row = 0;

		while (row < size)
		{
			space = 0;
			while (space < size - row - 1)
			{
				_putchar(' ');
				space++;
			}
			column = 0;
			while (column <= row)
			{
				_putchar('#');
				column++;
			}
			_putchar('\n');
			row++;
		}
	}
}
