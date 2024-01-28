#include <stddef.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints number followed by newline
 * @seperator:  string to be printed between numbers
 * @n: he number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	int num;
	va_list args;

	va_start(args, n);
	while (i < n)
	{
		num = va_arg(args, const int);
		printf("%d", num);
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
