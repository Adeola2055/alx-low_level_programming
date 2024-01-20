#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: points to an array
 */
void print_chessboard(char (*a)[8])
{
	int row = 0, col;

	/* iterate through rows */
	while (row < 8)
	{
		col = 0;
		/* iterate through columns */
		while (col < 8)
		{
			_putchar(a[row][col]);/* print the current cell */
			col++;
		}
		_putchar('\n');
		row++;
	}
}
