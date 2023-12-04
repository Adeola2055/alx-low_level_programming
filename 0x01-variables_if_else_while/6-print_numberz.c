#include <stdio.h>
/**
 *  main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		putchar(i + '0'); /* convert digit to ascii and print */
		i++;
	}
	putchar('\n');
	return (0);
}
