#include "main.h"
/**
 * times_table - print the 9 times table starting from 0
 *
 * Return: Void
 */
void times_table(void)
{
	int row, column, product;

	row = 0;

	while (row <= 9) /* outer loops for row 0 to 9 */
	{
		column = 0;
		while (column <= 9) /* outer loops for column 0 to 9 */
		{
			product = row * column; /* product of col and row */
			/* check if this is the first column in the row */
			if (column == 0)
			{
				/* Print the product without a comma and space */
				_putchar(product + '0');
			}
			else
			{
				/* for other columns , print a , and space b4 the product */
				_putchar(',');
				_putchar(' ');
				if (product >= 10) /* Check if product is a two-digit number */
				{
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
				}
				else
				{
					/* print a space b4 the ones digit for alignment */
					_putchar(' ');
					_putchar(product + '0'); /* print the ones digit */
				}
			}
			column++;
		}
		/* move to the next line after printing a row */
		_putchar('\n');
		row++;
	}
}
