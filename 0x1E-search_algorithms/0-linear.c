#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of
 * integers using linear search algorithm.
 * @array: the input array
 * @size: the  size of the array
 * @value: the value to search in
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int g;

	if (array == NULL)
		return (-1);

	for (g = 0; g < (int)size; g++)
	{
		printf("Value checked array[%u] = [%d]\n", g, array[g]);
		if (value == array[g])
			return (g);
	}
	return (-1);
}
