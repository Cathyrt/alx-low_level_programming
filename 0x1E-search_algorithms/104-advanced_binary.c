#include "search_algos.h"

/**
 * binary_search_rec - searches for a value in an array of
 * integers using the Binary search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index of the value, or -1 if not found
 */
int binary_search_rec(int *array, size_t size, int value)
{
	size_t mid = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (mid && size % 2 == 0)
		mid--;

	if (value == array[mid])
	{
		if (mid > 0)
			return (binary_search_rec(array, mid + 1, value));
		return ((int)mid);
	}

	if (value < array[mid])
		return (binary_search_rec(array, mid + 1, value));

	mid++;
	return (binary_search_rec(array + mid, size - mid, value) + mid);
}

/**
 * advanced_binary - calls to binary_search_rec to return
 * the index of the number
 * @array: input array
 * @size: size of the array
 * @value: The value to search for.
 * Return: The first index of the value in the array, otherwise -1.
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = binary_search_rec(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
