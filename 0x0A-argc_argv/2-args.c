#include <stdio.h>
/**
 * argv_name - prints cmd line args name
 * @argc: number of cmd line arguments
 * @argv: pointer to array of cmd line arguments
 */
void argv_name(int argc, char *argv[])
{
	int i = 0;

	if (argc > i)
	{
		while (i < argc)
		{
			printf("%s\n", argv[i]);
			i++;
		}
	}
}
/**
 * main - entry point
 * @argc: number of cmd line arguments
 * @argv: pointer to array of cmd line arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	argv_name(argc, argv);
	return (0);
}
