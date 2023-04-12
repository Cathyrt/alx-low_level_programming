#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array of integers.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index of the value in the array, otherwise -1.
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t i, mid;
	int res;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
		printf("%d%s", array[i], i == size - 1 ? "" : ", ");

	mid = (size - 1) / 2;

	if (array[mid] == value)
	{
		if (mid == 0 || array[mid - 1] != value)
			return (mid);
	}
	if (size == 1)
		return (-1);

	if (array[mid] < value)
	{
		res = advanced_binary(array + mid + 1, size - mid - 1, value);
		return (res == -1 ? (size_t)-1 : mid + 1 + res);
	}
	else
		return (advanced_binary(array, mid + 1, value));
}

/**
 * print_array - Prints an array of integers
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 */
void print_array(int *array, size_t size)
{
	size_t i;

	for (i = 0; i < size; ++i)
	{
		printf("%d", array[i]);
		if (i != size - 1)
			printf(", ");
	}
	printf("\n");
}
