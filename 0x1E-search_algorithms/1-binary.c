#include "search_algos.h"
/**
  * binary_search - This searches for a value in a sorted array
  *                 of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  * Otherwise, return the index where the value is located.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t g, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (g = left; g < right; g++)
			printf("%d, ", array[g]);
		printf("%d\n", array[g]);

		g = left + (right - left) / 2;
		if (array[g] == value)
			return (g);
		if (array[g] > value)
			right = g - 1;
		else
			left = g + 1;
	}

	return (-1);
}
