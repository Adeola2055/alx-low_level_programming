#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * @argc: number of command line argument
 * @argv: Pointer to cmd value
 *
 * Return: 1 if error or 0 otherwise
 */
int multiply(int num1, int num2);

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]); /* convert string to integer */
	num2 = atoi(argv[2]);
	result = multiply(num1, num2);
	printf("%d\n", result);
	return (0);
}
/**
 * multiply - multiply two numbers
 * @num1: first number
 * @num2: second number
 *
 * Return: result of multiplication
 */
int multiply(int num1, int num2)
{
	return (num1 * num2);
}
