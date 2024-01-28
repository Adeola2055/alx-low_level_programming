#include <stdarg.h>
/**
 * sum_them_all - calculates the total sum of it parameters
 * @n: non variadic argument of the function
 *
 * Return: the sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list args;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);
	while (i < n)
	{
		sum += va_arg(args, const int);
		i++;
	}
	va_end(args);
	return (sum);
}
