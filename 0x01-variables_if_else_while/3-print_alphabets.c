#include <stdio.h>
/**
 *  main - Entry point
 *
 *  Return:  Always 0
 */
int main(void)
{
	char c, i;

	c = 'a';
	i = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (i <= 'Z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
