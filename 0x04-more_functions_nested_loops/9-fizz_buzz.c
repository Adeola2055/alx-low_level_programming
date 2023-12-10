#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
void fizzBuzz(void);
int main(void)
{
	fizzBuzz();
	return (0);
}

/**
 * fizzBuzz - print FizzBuzz
 *
 */
void fizzBuzz(void)
{
	int num = 1;

	while (num <= 100)
	{
		if (num % 5 == 0 && num % 3 == 0)
		{
			printf("FizzBuzz");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", num);
		}
		if (num != 100)
		{
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
}
