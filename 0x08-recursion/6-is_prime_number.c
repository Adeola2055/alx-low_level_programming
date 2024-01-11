#include <math.h>
int is_prime_helper(int n, int divisor);
/**
 * is_prime_number - find prime number
 * @n: number
 *
 * Return: 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_helper(n, 2));
}
/**
 * is_prime_helper - finds prime number
 * @n: first operand
 * @divisor: second operand
 *
 * Return: 1
 */
int is_prime_helper(int n, int divisor)
	{
	if (divisor > n / 2)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, divisor + 1));
}
