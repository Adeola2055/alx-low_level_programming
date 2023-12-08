#include <stdio.h>
/**
 * main - print the sum of fibbonaci that doesn't exceed 4,000,000
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long i, a, b, c, sum, endLoop;

	a = 1, b = 2, i = 0, endLoop = 4000000, sum = 0;

	printf("%lu, %lu", a, b);
	while (i < 48)
	{
		c = a + b;
		if ((c <= endLoop) && (c % 2 == 0))
		{
			sum += c;
		}
		a = b;
		b = c;
		i++;
	}
	printf("%lu\n", sum);
	return (0);
}
