/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 *
 * Return: if number doesn't have square root return -1
 */
int _sqrt_recursion(int n);

int _sqrt_recursion_helper(int n, int guess);

int _sqrt_recursion(int n)
{
    /* Base Case for Error: Check if n is negative */
	if (n < 0)
	{
		return (-1); /* Return -1 to indicate an error */
	}
    /* Call a helper function with an initial guess of n/2 */
	return (_sqrt_recursion_helper(n, n / 2));
}
/**
 * _sqrt_recursion_helper - to perform Newton's method for square root
 * @n: first operand
 * @guess: second operand
 *
 * Return: new_guess
 */
int _sqrt_recursion_helper(int n, int guess)
{
	int new_guess = (guess + n / guess) / 2;

    /* Base Case: Check if the difference between guesses is very small */
	if (guess - new_guess <= 1 && new_guess - guess <= 1)
	{
		return (new_guess); /* Found the square root */
	}
    /* Recursive Case: Continue with the updated guess */
	return (_sqrt_recursion_helper(n, new_guess));
}
