#include <stdio.h>
/**
 * _print_filename - prints it name.
 * @argv: pointer to command line argument
 */
void _print_filename(char *argv[])
{
	printf("%s\n", argv[0]);
}

/**
 * main - entry point
 * @argc: number of cmd argument
 * @argv: pointer to cmd argument
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	_print_filename(argv);
	return (0);
}
