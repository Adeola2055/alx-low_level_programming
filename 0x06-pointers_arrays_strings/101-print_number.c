#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n; /* make it positive for further processing */
	}
	if (n < 10) /* base case: if the num is a single digit print it */
	{
		_putchar(n + '0');
	}
	else
	{
		/*
		 * Recursive step: Break the number into two parts - the last digit and
		 * the rest
		 */
		print_number(n / 10);
		/* print the last digit */
		_putchar(n % 10 + '0');
	}
}
