#include <stddef.h>
/**
 * int_index - searches for an integer
 * @array: pointer to an array of integer
 * @size: size of array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: -1 if no match is found or the index of the first element otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;
	int result;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	while (index < size)
	{
		result = cmp(array[index]);
		if (result != 0)
		{
			return (index);
		}
		index++;
	}
	/* if no match is found */
	return (-1);
}
