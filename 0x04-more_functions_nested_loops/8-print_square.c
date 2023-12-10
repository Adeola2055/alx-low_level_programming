#include "main.h"
/**
 * print_square - prints a square, followed by a new line.
 * @size: size of square to be print
 *
 */
void print_square(int size)
{
	int row, column;

	row = 0;

	while (row < size)
	{
		column = 0;
		while (column < size)
		{
			_putchar('#');
			column++;
		}
		_putchar('\n');
		row++;
	}
}
