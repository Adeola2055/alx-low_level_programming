#include <stdio.h>
/**
 * main - print the first 98 fibbonacci numbers
 *
 * Return: Void
 */
int main(void)
{
	unsigned long a, b, i, c;

	a = 1, b = 2, i = 0;

	printf("%lu, %lu", a, b);
	while (i < 95)
	{
		c = a + b;
		printf(", %lu", c);
		a = b;
		b = c;
		i++;
	}
	printf("\n");
	return (0);
}
