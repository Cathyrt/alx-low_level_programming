#include "search_algos.h"

/**
 * linear_skip - searches for a value in a skip list
 *
 * @list: input list
 * @value: value to search in
 * Return: index of the number
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *next, *current;

	if (list == NULL)
		return (NULL);

	next = list;

	do {
		list = next;
		current = next->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)next->index, next->n);
	} while (next->express && next->n < value);

	if (current->express == NULL)
	{
		list = current;
		while (current->next)
			current = current->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)current->index);

	while (list != current->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
