#include <stdio.h>
/**
 * main - print first 50 fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int a, b, c, i;

	a = 1, b = 2, i = 0;

	printf("%d, %d", a, b);
	while (i < 20)
	{
		c = a + b;
		if (c <= 50)
		{
		printf(", %d", c);
		}
		a = b;
		b = c;
		i++;
	}
	printf("\n");
	return (0);
}
