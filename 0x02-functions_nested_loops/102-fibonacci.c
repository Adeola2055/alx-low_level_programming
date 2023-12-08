#include <stdio.h>
/**
 * main - print first 50 fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long a, b, c, i;

	a = 1, b = 2, i = 0;

	printf("%lu, %lu", a, b);
	while (i < 48)
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
