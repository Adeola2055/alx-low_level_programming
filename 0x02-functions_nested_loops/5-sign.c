#include "main.h"
/**
 * print_sign - Print the sign of a number
 *@n: Number to be checked.
 *
 * Return: 1 if number is > 0,
 * 0 if number == 0,
 * -1 if number < 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
		return (0);
}
