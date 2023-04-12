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
	int leftIndex = 0;
	int rightIndex = size - 1;

	while (leftIndex <= rightIndex)
	{
		int midIndex = (leftIndex + rightIndex) / 2;

		printf("Searching in array: ");
		for (size_t i = leftIndex; i <= rightIndex; i++)
		{
			if (i != rightIndex)
				printf("%d, ", array[i]);
			else
				printf("%d", array[i]);
		}
		printf("\n");
		if (array[midIndex] == value)
		{
			return (midIndex);
		}
		else if (array[midIndex] < value)
		{
			leftIndex = midIndex + 1;
		}
		else
		{
			rightIndex = midIndex - 1;
		}
	}
	return (-1);
}
