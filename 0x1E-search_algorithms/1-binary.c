#include "search_algos.h"

/**
 * binary_search - Use a binary search to find the given value in an array
 * @array: Array to search
 * @size: Size of the given array
 * @value: Value to search for
 * Return: the target value index, else -1
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
	{
		return (-1);
	}
	int left = 0;
	int right = size - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;

		printf("Searching in array: ");
		for (size_t i = left; i <= right; i++)
		{
			printf("%d ", array[i]);
		}
		printf("\n");
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
