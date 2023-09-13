#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
	int i;
	unsigned long int a = 1, b = 2, next, sum;


	for (i = 1; i <= 33; ++i)
	{
		if (a < 4000000 && (a % 2) == 0)
		{
			sum = sum + a;
		}
		next = a + b;
		a = b;
		b = next;
	}
	printf("%lu\n", sum);
	return (0);
}
