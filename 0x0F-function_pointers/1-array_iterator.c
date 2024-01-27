#include <stddef.h>
/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: a pointer to an array of integers
 * @size: size of the array
 * @action: A function pointer that points to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}
	while (index < size)
	{
		action(array[index]);
		index++;
	}
}
