#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Use a jump search algorithm to find a given value
 * @array: Array to search through
 * @size: Size of the array
 * @value: Value to search for
 * Return: The index of the value in the array, otherwise -1.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t prev = 0;
	size_t i = prev;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	while (array[(int)fmin(jump, size) - 1] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
			prev + jump, array[prev + jump]);
		prev = jump;
		jump += sqrt(size);
		if (prev >= size)
			return (-1);
	}
	while (array[i] < value)
	{
		i++;
		if (i == fmin(jump, size))
			return (-1);
		printf("Value checked array[%lu] = [%d]\n", prev, array[i]);
	}
	if (array[i] == value)
	{
		printf("Value found between indexes [%lu] and [%lu]\n",
			prev, prev + jump);
		printf("Value checked array[%lu] = [%d]\n", prev, array[i]);
		return ((int)i);
	}
	return (-1);
}
