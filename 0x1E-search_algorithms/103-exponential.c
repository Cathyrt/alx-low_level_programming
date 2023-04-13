#include "search_algos.h"

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
	size_t l = left;
	size_t r = right - 1;
	size_t mid = 0, i = 0;

	if (array != NULL)
	{
		while (l <= r)
		{
			mid = (l + r) / 2;
			printf("Searching in array: ");
			for (i = l; i < r; i++)
			{
				printf("%d, ", array[i]);
			}
			printf("%d\n", array[i]);
			if (array[mid] < value)
			{
				l = mid + 1;
			}
			else if (array[mid] > value)
			{
				r = mid - 1;
			}
			else
			{
				return (mid);
			}
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
	size_t bound = 1, min = 0;
	int result;

	if (array != NULL)
	{
		while (bound < size && array[bound] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
			bound *= 2;
		}
		if (bound + 1 < size)
			min = bound + 1;
		else
			min = size;
		printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, min - 1);
		result = binary_search_index(array, bound / 2, min, value);
		if (result != -1)
			return (result);
	}
	return (-1);
}
