#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * @a: array of integers
 * @n: number of array elements
 *
 */
void reverse_array(int *a, int n)
{
	int temp, index = 0;
	int end = n - 1; /* to get the last index of the array */

	while (index < end)
	{
		temp = a[index];
		a[index] = a[end];
		a[end] = temp;
		index++;
		end--;
	}
}
