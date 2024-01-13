#include <stdio.h>
/**
 * _count - print number of cmd argument
 * @argc: number of cmd argument
 */
void _count(int argc)
{
	int count = 0;

	if (argc > 0)
	{
		while (count < (argc - 1))
		{
			count++;
		}
	}
	printf("%d\n", count);
}
/**
 * main - print a number
 * @argc: number of cmd argument
 * @argv: unsued variable
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	_count(argc);
	return (0);
}
