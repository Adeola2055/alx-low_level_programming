/**
 * reverse_array - reverse content of an array of integers
 * @a: pointer to an array of integer
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i = 0, end = n - 1;
	int temp;

	while (i < end)
	{
		temp = a[i];
		a[i] = a[end];
		a[end] = temp;
		i++;
		end--;
	}
}
