#include <stdio.h>
/**
 * print_array - prints element of an array
 * @a: pointer to an array of integers
 * @n: number of element of the array to be printed.
 */
void print_array(int *a, int n)
{
	int index = 0;

	while (index < n)
	{
		printf("%d", a[index]);
		if (index != n - 1)
		{
			printf(", ");
		}
		index++;
	}
	printf("\n");
}
