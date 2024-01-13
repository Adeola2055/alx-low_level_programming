#include <stdio.h>
#include <stdlib.h>

/**
 * add_positive_numbers - adds positive numbers
 * @argc: number of command line arguments
 * @argv: pointer to command line arguments
 *
 * Return: sum of positive numbers or 1 in case of error
 */
int add_positive_numbers(int argc, char *argv[])
{
	int sum = 0, i = 1, j = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
/**
 * main - entry point
 * @argc: number of argument
 * @argv: pointer to cmd argument
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	return (add_positive_numbers(argc, argv));
}
