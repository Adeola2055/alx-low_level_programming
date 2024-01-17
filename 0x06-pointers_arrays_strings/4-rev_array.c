/**
 * reverse_array - reverse content of an array of integers
 * @a: pointer to an array of integer
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i = 0, r2 = n - 1;
	char temp;

	while (i <= r2)
	{
		temp = a[i];
		a[i] = a[r2];
		a[r2] = temp;
		i++;
		r2--;
	}
}
