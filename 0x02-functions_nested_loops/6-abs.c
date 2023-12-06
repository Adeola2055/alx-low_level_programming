#include "main.h"
/**
 * _abs - Calculate the absolute value of a number
 * @num: argument to be passed to _abs().
 *
 * Return: -int if number is negative,
 * +int if number is positive.
 */
int _abs(int num)
{
	if (num < 0)
	{
		return (-num);
	}
	else
		return (num);
}
