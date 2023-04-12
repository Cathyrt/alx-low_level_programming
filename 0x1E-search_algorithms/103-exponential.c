#include "search_algos.h"
#include <math.h>

/**
 * binary_search_index - Searches a value in a sorted array using \
 * a binary search.
 * @array: Array to search
 * @left: The index of the leftmost element of the subarray.
 * @right: The index of the rightmost element of the subarray.
 * @value: Value to search for
 * Return: the target value index, else -1
 */
int binary_search_index(int *array, size_t left, size_t right, int value)
{
	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return (-1);
}

/**
 * exponential_search - Searches a value in a sorted array using \
 * an exponential search.
 * @array: Array to search
 * @size: Size of the given array
 * @value: Value to search for
 * Return: the target value index, else -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, left = bound / 2,
	       right = fmin(bound, size - 1);

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	while (bound < size && array[bound] < value)
	{
		printf("Comparing value %d at index %lu", array[bound], bound);
		bound *= 2;
	}

	printf("Performing binary search on range [%lu, %lu]\n", left, right);
	return (binary_search_index(array, left, right, value));
}
