#include "search_algos.h"
/**
 * rec_search -This searches for a value in an array of
 * integers using the Binary search algorithm.
 * @array: the  input array
 * @size: the size of the array
 * @value: the value to search in
 * Return: the index of the number
 */
int rec_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t g;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (g = 0; g < size; g++)
		printf("%s %d", (g == 0) ? ":" : ",", array[g]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
	{
		if (half > 0)
			return (rec_search(array, half + 1, value));
		return ((int)half);
	}

	if (value < array[half])
		return (rec_search(array, half + 1, value));

	half++;
	return (rec_search(array + half, size - half, value) + half);
}
/**
 * advanced_binary -This  calls to rec_search to return
 * the index of the number.
 * @array: The  input array
 * @size: The size of the array
 * @value: the value to search in
 * Return: the index of the number
 */
int advanced_binary(int *array, size_t size, int value)
{
	int ind;

	ind = rec_search(array, size, value);

	if (ind >= 0 && array[ind] != value)
		return (-1);
	return (ind);
}
