#include <stdio.h>
#include <stdlib.h>
/**
 * mul - multiply to numbers
 * @num1: first operand
 * @num2: second operand
 *
 *
 * Return: result
 */
int mul(int num1, int num2)
{
	return (num1 * num2);
}
/**
 * main - entry point
 * @argc: number of cmd line argument
 * @argv: pointer to cmd line argument value
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = mul(num1, num2);
	printf("%d\n", result);
	return (0);
}
