#include "search_algos.h"

/**
 * linear_search - Search linearly through an array for a value
 * @array: Array to search
 * @size: The size of the array
 * @value: The value to be searched through
 * Return: return the index the value is located, else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
