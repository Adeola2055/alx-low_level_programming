#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	i = 0;

	while (i < 16)
	{
		if (i < 10) /* print 1-9 */
		{
			putchar(i + '0');
		}
		else
		{
			putchar('a' + (i - 10)); /* print hexadecimal alphabets */
		}
		i++;
	}
	putchar('\n');
	return (0);
}
