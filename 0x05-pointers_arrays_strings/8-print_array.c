#include <stdio.h>
/**
 * print_array - prints n element of an array of integers
 * @a: first operand
 * @n: number of array to be printed
 */
void print_array(int *a, int n)
{
	int index = 0;

	while (index < n)
	{
		printf("%d", a[index]);
		if (index != (n - 1))
		{
			printf(", ");
		}
		index++;
	}
	printf("\n");
}
