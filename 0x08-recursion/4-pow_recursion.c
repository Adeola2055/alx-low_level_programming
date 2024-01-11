/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: first operand
 * @y: second operand
 *
 * Return: -1 if y is lower than 0
 */
int _pow_recursion(int x, int y)
	{
    /* Base Case for Error: Check if y is lower than 0 */
	if (y < 0)
	{
		return (-1); /* Return -1 to indicate an error */
	}
    /* Base Case: If the exponent is 0, result is 1 */
	if (y == 0)
	{
		return (1);
	}
    /* Recursive Case: Calculate power for x^y */
	return (x * _pow_recursion(x, y - 1));
}
