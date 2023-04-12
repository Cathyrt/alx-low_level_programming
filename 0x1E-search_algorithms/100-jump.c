#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Use a jump search algorithm to find a given value.
 * @array: Array to search through.
 * @size: Size of the array.
 * @value: Value to search for.
 * Return: The index of the value in the array, otherwise -1.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump, left = 0, right = 0;

	if (!array)
		return (-1);
	jump = (size_t)sqrt(size);
	while ((right < size) && (*(array + right) < value))
	{
		printf("Value checked array[%d] = [%d]\n", (int)right, *(array + right));
		left = right;
		right += jump;
		if (left >= size)
			return (-1);
	}

	printf("Value found between indexes [%d] and [%d]\n", (int)left, (int)right);
	right = right >= size ? size - 1 : right;
	for (; (left <= right) && (*(array + left) <= value); left++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)left, *(array + left));
		if (*(array + left) == value)
			return ((int)left);
	}

	return (-1);
}
