#include "search_algos.h"

/**
 * interpolation_search - Searches a value in a sorted array using \
 * an interpolation search.
 * @array: Array to search
 * @size: Size of the array
 * @value: Value to search for
 * Return: The first index of the value in the array, otherwise -1.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		size_t pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));
	if (array[pos] == value)
	{
		return (pos);
	}
	if (array[pos] < value)
	{
		low = pos + 1;
	}
	else
	{
		high = pos - 1;
	}
	}
	return (-1);
}
