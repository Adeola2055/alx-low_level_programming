/**
 * factorial - find the factorial of a given number
 * @n: number
 *
 * Return: -1 to indicate an error
 */
int factorial(int n)
	{
    /* Base Case for Error: Check if n is lower than 0 */
	if (n < 0)
	{
		return (-1); /* Return -1 to indicate an error */
	}
    /* Base Case: Factorial of 0 is 1 */
	if (n == 0)
	{
		return (1);
	}
    /* Recursive Case: Calculate factorial for n */
	return (n * factorial(n - 1));
}
