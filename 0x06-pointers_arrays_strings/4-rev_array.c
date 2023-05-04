#include "main.h"
/**
 * reverse_array-reverses the content of arrays of strings.
 * @a: input value
 * @n: number of elements of array.
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int b;
	int c;

	for (b = 0; b < n--; b++)
	{
		c = a[b];
		a[b] = a[n];
		a[n] = c;
	}
}
