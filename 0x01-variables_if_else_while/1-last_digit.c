#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  main -  Entry point
 *
 *  Return: Always (0) success
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	/* your code goes there */
	printf("Last digit of %d is %d", n, lastDigit);
	if (lastDigit > 5)
	{
		printf(" and is greater than 5\n");
	}
	else if (lastDigit == 0)
	{
		printf(" and is 0\n");
	}
	else if (lastDigit < 6)
	{
		printf(" and is less than 6 and not 0\n");
	}
	return (0);
}
