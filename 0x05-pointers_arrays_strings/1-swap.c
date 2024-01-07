/**
 * swap_int - swaps the value of two integers
 * @a: pointer to first value
 * @b: pointer to a second value
 */
void swap_int(int *a, int *b)
{
	int temp; /* a temporary storage */

	temp = *a;
	*a = *b;
	*b = temp;
}
