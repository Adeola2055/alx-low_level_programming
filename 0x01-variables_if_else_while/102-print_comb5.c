#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int x, y;

	x = 0;

	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			/* print the tens and one digit of x */
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			putchar(' ');
			/* print the tens and one digit of y */
			putchar((y / 10) + '0');
			putchar((y % 10) + '0');
			/* print comma and space if it's not the last pair*/
			if (x != 98 || y != 99)
			{
				putchar(',');
				putchar(' ');
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
