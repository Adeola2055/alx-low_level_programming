#include <stdlib.h>
/**
* array_range - creates an array of integers
* @min: smallest number in the array
* @max: lagrest value in the array
*
* Return: pointer to the address of the memory block
*/

int *array_range(int min, int max)
{
	int *ptr;
	int index = 0, i;

	/* validating min and max value */
	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	/* initialize values from min to max */
	i = min;
	while (i <= max)
	{
		ptr[index] = i;
		i++;
		index++;
	}
	return (ptr);
}
