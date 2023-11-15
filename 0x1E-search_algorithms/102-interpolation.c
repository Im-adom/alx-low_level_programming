#include "search_algos.h"
/**
 * interpolation_search -This searches for a value in an array of
 * integers using the Interpolation search algorithm.
 * @array: the input array.
 * @size:  the size of the array.
 * @value: the value to search in.
 * Return: the index of the number.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;
	double d;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (size)
	{
		d = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		pos = (size_t)(low + d);
		printf("Value checked array[%d]", (int)pos);

		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[pos]);
		}

		if (array[pos] == value)
			return ((int)pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;

		if (low == high)
			break;
	}

	return (-1);
}
