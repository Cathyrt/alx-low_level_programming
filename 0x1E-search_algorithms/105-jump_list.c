#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in an array of
 * integers using the Jump search algorithm
 *
 * @list: input list
 * @size: size of the array
 * @value: value to search in
 * Return: node containing the value, or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump, prev_index, curr_index;
	listint_t *prev;

	if (list == NULL || size == 0)
		return (NULL);

	jump = (size_t)sqrt((double)size);
	curr_index = 0;
	prev_index = 0;

	do {
		prev = list;
		prev_index = curr_index;
		curr_index += jump;

		while (list->next && list->index < curr_index)
			list = list->next;

		if (list->next == NULL && curr_index != list->index)
			curr_index = list->index;

		printf("Value checked at index [%lu] = [%d]\n", curr_index, list->n);
	} while (curr_index < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%lu] and [%lu]\n", prev_index, list->index);

	for (; prev && prev->index <= list->index; prev = prev->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
