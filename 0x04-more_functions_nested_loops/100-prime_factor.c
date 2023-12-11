#include <stdio.h>
/**
 * prime_factor - find the largest prime factor of a number
 * @number: number whose prime factor you want to find
 *
 * Return: the largest factor
 */
long prime_factor(long number)
{
	long factor = 2;

	while (number > 1)
	{
		if (number % factor == 0)
		{
			number = number / factor;
		}
		else
			factor++;
	}
	return (factor);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
long prime_factor(long number);

int main(void)
{
	long givenNumber = 612852475143;

	long largestPrimeFactor = prime_factor(givenNumber);
	printf("%ld\n", largestPrimeFactor);
	return (0);
}
